#include <stdint.h>
#include <stdio.h>

#include "owi.h"
#include <avr/interrupt.h>
#include <avr/delay.h>

#define __disable_interrupt()   asm("cli")
#define __enable_interrupt()   	asm("sei")


/*****************************************************************************
*
*    ���������� ����������
*
******************************************************************************/
unsigned char  dallas_crc;
/*unsigned char dallas_crc_table[]  =		// dallas crc lookup table
{
	0, 94,188,226, 97, 63,221,131,194,156,126, 32,163,253, 31, 65,
	157,195, 33,127,252,162, 64, 30, 95, 1,227,189, 62, 96,130,220,
	35,125,159,193, 66, 28,254,160,225,191, 93, 3,128,222, 60, 98,
	190,224, 2, 92,223,129, 99, 61,124, 34,192,158, 29, 67,161,255,
	70, 24,250,164, 39,121,155,197,132,218, 56,102,229,187, 89, 7,
	219,133,103, 57,186,228, 6, 88, 25, 71,165,251,120, 38,196,154,
	101, 59,217,135, 4, 90,184,230,167,249, 27, 69,198,152,122, 36,
	248,166, 68, 26,153,199, 37,123, 58,100,134,216, 91, 5,231,185,
	140,210, 48,110,237,179, 81, 15, 78, 16,242,172, 47,113,147,205,
	17, 79,173,243,112, 46,204,146,211,141,111, 49,178,236, 14, 80,
	175,241, 19, 77,206,144,114, 44,109, 51,209,143, 12, 82,176,238,
	50,108,142,208, 83, 13,239,177,240,174, 76, 18,145,207, 45,115,
	202,148,118, 40,171,245, 23, 73, 8, 86,180,234,105, 55,213,139,
	87, 9,235,181, 54,104,138,212,149,203, 41,119,244,170, 72, 22,
	233,183, 85, 11,136,214, 52,106, 43,117,151,201, 74, 20,246,168,
	116, 42,200,150, 21, 75,169,247,182,232, 10, 84,215,137,107, 53
};*/

/****************************************************************************
*
*
*  		������� ����������� �������� 1-WIRE (OWI)
*
*
*****************************************************************************/

	/*****************************************************************************
	   ������� --> 1-WIRE BUS
	   This function initializes the 1-Wire bus(es) by releasing it and
	   waiting until any presence sinals are finished.
	******************************************************************************/
	void OWI_Init(unsigned char pins)
	{
		OWI_RELEASE_BUS(pins);
		// The first rising edge can be interpreted by a slave as the end of a
		// Reset pulse. Delay for the required reset recovery time (H) to be
		// sure that the real reset is interpreted correctly.
		_delay_us(OWI_DELAY_H_STD_MODE);
	}
	/*****************************************************************************
		������� --> 1-WIRE BUS
		������ � ����� ��� - '1'
		Generates the waveform for transmission of a '1' bit on the 1-Wire bus.
	******************************************************************************/

	void OWI_WriteBit1(unsigned char pins)
	{
	   __disable_interrupt();

		// Drive bus low and delay.
		OWI_PULL_BUS_LOW(pins);
		_delay_us(OWI_DELAY_A_STD_MODE);

		// Release bus and delay.
		OWI_RELEASE_BUS(pins);
		_delay_us(OWI_DELAY_B_STD_MODE);

		__enable_interrupt();
	}
	/*****************************************************************************
		������� --> 1-WIRE BUS
		������ � ����� ��� - '0'
		Generates the waveform for transmission of a '0' bit on the 1-Wire bus.
	******************************************************************************/
	void OWI_WriteBit0(unsigned char pins)
	{
		__disable_interrupt();

		// Drive bus low and delay.
		OWI_PULL_BUS_LOW(pins);
	   _delay_us(OWI_DELAY_C_STD_MODE);

		// Release bus and delay.
		OWI_RELEASE_BUS(pins);
		_delay_us(OWI_DELAY_D_STD_MODE);

	   __enable_interrupt();
	}
	/*****************************************************************************
		������� --> 1-WIRE BUS
		������  �� ����� ������ ����
		Generates the waveform for reception of a bit on the 1-Wire(R) bus(es).
		\return A bitmask of the buses where a '1' was read.
	******************************************************************************/
	unsigned char OWI_ReadBit(unsigned char pins)
	{
		unsigned char bitsRead;

		__disable_interrupt();

		// Drive bus low and delay.
		OWI_PULL_BUS_LOW(pins);
		_delay_us(OWI_DELAY_A_STD_MODE);

		// Release bus and delay.
		OWI_RELEASE_BUS(pins);
		_delay_us(OWI_DELAY_E_STD_MODE);

		// Sample bus and delay.
		bitsRead = OWI_PIN & pins;
	   _delay_us(OWI_DELAY_F_STD_MODE);

		__enable_interrupt();

		return bitsRead;
	}
	/*****************************************************************************
		������� --> 1-WIRE BUS
		Send a Reset signal and listen for Presence signal
		Generates the waveform for transmission of a Reset pulse on the
		1-Wire(R) bus and listens for presence signals.
		\return A bitmask of the buses where a presence signal was detected.
	******************************************************************************/
	unsigned char OWI_DetectPresence(unsigned char pins)
	{
		unsigned char presenceDetected;

		__disable_interrupt();

		// Drive bus low and delay.
		OWI_PULL_BUS_LOW(pins);
		_delay_us(OWI_DELAY_H_STD_MODE);

		// Release bus and delay.
		OWI_RELEASE_BUS(pins);
		_delay_us(OWI_DELAY_I_STD_MODE);

		// Sample bus to detect presence signal and delay.
		presenceDetected = ((~OWI_PIN) & pins);
		_delay_us(OWI_DELAY_J_STD_MODE);

		__enable_interrupt();

		return presenceDetected;
	}
	/*****************************************************************************
		������� --> 1-WIRE BUS
		Sends one byte of data on the 1-Wire(R) bus(es)
		\param  data    The data to send on the bus(es).
		\param  pins    A bitmask of the buses to send the data to.
	******************************************************************************/
	void OWI_SendByte(unsigned char data, unsigned char pins)
	{
		unsigned char temp;
		unsigned char i;

		// Do once for each bit
		for (i = 0; i < 8; i++)
		{
			// Determine if lsb is '0' or '1' and transmit corresponding
			// waveform on the bus.
			temp = data & 0x01;
			if (temp)
			{
				OWI_WriteBit1(pins);
			}
			else
			{
				OWI_WriteBit0(pins);
			}
			// Right shift the data to get next bit.
			data >>= 1;
		}
	}
	/*****************************************************************************
		������� --> 1-WIRE BUS
		Receives one byte of data from the 1-Wire(R) bus.
		\param  pin     A bitmask of the bus to read from.
		\return     The byte read from the bus.
	******************************************************************************/
	unsigned char OWI_ReceiveByte(unsigned char pin)
	{
		unsigned char data;
		unsigned char i;

		// Clear the temporary input variable.
		data = 0x00;

		// Do once for each bit
		for (i = 0; i < 8; i++)
		{
			// Shift temporary input variable right.
			data >>= 1;
			// Set the msb if a '1' value is read from the bus.
			// Leave as it is ('0') else.
			if (OWI_ReadBit(pin))
			{
				// Set msb
				data |= 0x80;
			}
		}
		return data;
	}
	/*****************************************************************************
		������� 1-WIRE PROTOCOL
		Sends the SKIP ROM command to the 1-Wire bus(es).
		\param  pin     A bitmask of the bus to read from.
	******************************************************************************/
	inline void OWI_SkipRom(unsigned char pins)
	{
		// Send the SKIP ROM command on the bus.
		OWI_SendByte(OWI_ROM_SKIP, pins);
	}
	/*****************************************************************************
		������� --> 1-WIRE PROTOCOL
		Sends the READ ROM command and reads back the ROM id.
		\param  romValue    A pointer where the id will be placed.
		\param  pin     A bitmask of the bus to read from.
	******************************************************************************/
	inline void OWI_ReadRom(unsigned char * romValue, unsigned char pin)
	{
		unsigned char bytesLeft = 8;

		// Send the READ ROM command on the bus.
		OWI_SendByte(OWI_ROM_READ, pin);

		// Do 8 times.
		while (bytesLeft > 0)
		{
			// Place the received data in memory.
			*romValue++ = OWI_ReceiveByte(pin);
			bytesLeft--;
		}
	}
	/*****************************************************************************
		������� --> 1-WIRE PROTOCOL
		Sends the MATCH ROM command and the ROM id to match against
		\param  romValue    A pointer to the ID to match against.
		\param  pins    A bitmask of the buses to perform the MATCH ROM command on.
	******************************************************************************/
	inline void OWI_MatchRom(unsigned char * romValue, unsigned char pins)
	{
		unsigned char bytesLeft = 8;

		// Send the MATCH ROM command.
		OWI_SendByte(OWI_ROM_MATCH, pins);

		// Do once for each byte.
		while (bytesLeft > 0)
		{
			// Transmit 1 byte of the ID to match.
			OWI_SendByte(*romValue++, pins);
			bytesLeft--;
		}
	}
	/*****************************************************************************
		������� --> 1-WIRE PROTOCOL
		������ ����������� �����
	******************************************************************************/
	inline unsigned char OWI_dallasCRC(unsigned char i)
	{
		// update the crc global variable and return it
		//dallas_crc = dallas_crc_table[dallas_crc^i];
		return dallas_crc;
	}
	/*****************************************************************************
		������� --> 1-WIRE PROTOCOL
		������ ����������� �����
	******************************************************************************/
	inline unsigned char OWI_dallasCRCBuff(unsigned char *ptr, int size)
	{
		int i, j;
		unsigned char crc = 0;				// current crc global variable
		unsigned char tmp;
		unsigned char data;

		//dallas_crc = 0;
		//for(i=0; i<size; i++){	OWI_dallasCRC(*ptr++);}
		//return dallas_crc;

		for( i=0; i<size; i++)
		{
			data = *ptr++;
			//���������� CRC - ������������ ������ ��� ��������� �����
			for( j=0; j<8; j++)
			{
			  tmp = (crc ^ data) & 0x01;
			  if (tmp==0x01) crc = crc ^ 0x18;
			  crc = (crc >> 1) & 0x7F;
			  if (tmp==0x01) crc = crc | 0x80;
			  data = data >> 1;
			}
		}

		return crc;
	}

	/*
	 * //��������� 8 ���� � ��������� CRC
  for( i=0; i<8; i++)
  {
    data = ds_read_byte(1<<PinNumb);         //��������� ��������� ����
    buff[i] = data;                          //��������� ��� � �������

    //���������� CRC - ������������ ������ ��� ��������� �����
    for( j=0; j<8; j++)
    {
      tmp = (crc ^ data) & 0x01;
      if (tmp==0x01) crc = crc ^ 0x18;
      crc = (crc >> 1) & 0x7F;
      if (tmp==0x01) crc = crc | 0x80;
      data = data >> 1;
    }
  }
  data = ds_read_byte(1<<PinNumb);          //��������� CRC �������
  if(crc==data) return 0;                   //���� CRC ������� - ������ ������ ���
  return 3;                                 //CRC �� �������, ������ �������� ������
  */
