/*
 * LedForex2012.c
 *
 * Created: 16.11.2012 13:59:09
 *  Author: mollex
 */

#include <stdint.h>
#include <stdio.h>

#include <avr/io.h>
#include <avr/delay.h>
#include <avr/interrupt.h>

#include "gl.h"
#include "font.h"

extern void uart_init();
extern void GL_Test();
extern void ht1632c_Init();
extern void dmdp10_Init();
extern void dmdp10_Scan();

extern void GL_DrawNumber(Font_t *font, uint16_t x0, uint16_t y0, uint32_t num, uint8_t colour);

extern VideoBuf_t	VideoBuf;
extern Font_t Font[];
int val = 0;
int val2 = 0;
int main(void) {
	uart_init();



	printf("begin\\n\r");

	dmdp10_Init();
	memset(VideoBuf.vbuff, 0x0, sizeof(VideoBuf.vbuff));

		sei();


		/*GL_DrawChar(&Font[0], 0, 0, '0', 0);
		GL_DrawChar(&Font[0], 8, 0, '1', 0);

		GL_DrawChar(&Font[1], 16, 0, '1', 0);
		GL_DrawChar(&Font[1], 40, 0, '1', 0);*/

	while (1) {


		_delay_ms(100);

			val = 0;
			GL_DrawNumber(&Font[1], 0, 0,val2++,1);
			//GL_DrawNumber(&Font[0], 0, 0,2222,1);
			//GL_DrawNumber(&Font[0], 32, 5,3333,1);
	}


}
