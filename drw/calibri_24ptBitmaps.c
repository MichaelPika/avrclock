/******************************************************************************
*
* (c) Copyright 2012 Peleng, Inc. All rights reserved.
*
* This file contains confidential and proprietary information of Peleng, Inc.
* and is protected under BY Reports and international copyright and other
* intellectual property laws.
* THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS PART OF THIS FILE
* AT ALL TIMES.
*
******************************************************************************/
/*****************************************************************************/
/**
* @file font_courierNew8pt.c
*
* Put short file description here  !
*
* 	Created on: Nov 21, 2012
*   	Author: mollex
*
* MODIFICATION HISTORY:
*
* Ver   Who  Date     Changes
* ----- ---- -------- -----------------------------------------------
* 1.00a    			  First release
*
******************************************************************************/

/****************************** Include Files *******************************/
#include "font.h"
/************************** Constant Definitions ****************************/

/**************************** Type Definitions ******************************/

/***************** Macros (Inline Functions) Definitions ********************/

/************************** Variable Definitions ****************************/

/************************** Function Prototypes *****************************/

// Character bitmaps for Calibri 24pt
unsigned char calibri_24ptBitmaps[] =
{
		// @0 '0' (14 pixels wide)
			0xF0, 0x03, //     ######
			0xF8, 0x0F, //    #########
			0x1C, 0x0E, //   ###    ###
			0x0E, 0x1C, //  ###      ###
			0x0E, 0x1C, //  ###      ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x0E, 0x1C, //  ###      ###
			0x0E, 0x1C, //  ###      ###
			0x1C, 0x0E, //   ###    ###
			0xFC, 0x07, //   #########
			0xF0, 0x03, //     ######

			// @40 '1' (12 pixels wide)
			0xE0, 0x00, //      ###
			0xF8, 0x00, //    #####
			0xFE, 0x00, //  #######
			0xEF, 0x00, // #### ###
			0xE3, 0x00, // ##   ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0xFF, 0x0F, // ############
			0xFF, 0x0F, // ############

			// @80 '2' (13 pixels wide)
			0xF8, 0x01, //    ######
			0xFE, 0x03, //  #########
			0x87, 0x07, // ###    ####
			0x01, 0x0F, // #       ####
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x07, //         ###
			0x00, 0x07, //         ###
			0x80, 0x03, //        ###
			0xC0, 0x01, //       ###
			0xE0, 0x01, //      ####
			0xE0, 0x00, //      ###
			0x70, 0x00, //     ###
			0x38, 0x00, //    ###
			0x1C, 0x00, //   ###
			0x0E, 0x00, //  ###
			0xFF, 0x1F, // #############
			0xFF, 0x1F, // #############

			// @120 '3' (13 pixels wide)
			0xF8, 0x01, //    ######
			0xFC, 0x07, //   #########
			0x0E, 0x07, //  ###    ###
			0x02, 0x0E, //  #       ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x07, //         ###
			0x80, 0x07, //        ####
			0xFC, 0x01, //   #######
			0xFC, 0x07, //   #########
			0x00, 0x0F, //         ####
			0x00, 0x1E, //          ####
			0x00, 0x1C, //           ###
			0x00, 0x1C, //           ###
			0x00, 0x1C, //           ###
			0x01, 0x1E, // #        ####
			0x07, 0x0F, // ###     ####
			0xFF, 0x07, // ###########
			0xFC, 0x01, //   #######

			// @160 '4' (15 pixels wide)
			0x00, 0x0F, //         ####
			0x80, 0x0F, //        #####
			0xC0, 0x0F, //       ######
			0xC0, 0x0E, //       ## ###
			0xE0, 0x0E, //      ### ###
			0x60, 0x0E, //      ##  ###
			0x30, 0x0E, //     ##   ###
			0x38, 0x0E, //    ###   ###
			0x18, 0x0E, //    ##    ###
			0x1C, 0x0E, //   ###    ###
			0x0E, 0x0E, //  ###     ###
			0x06, 0x0E, //  ##      ###
			0x07, 0x0E, // ###      ###
			0xFF, 0x7F, // ###############
			0xFF, 0x7F, // ###############
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###

			// @200 '5' (13 pixels wide)
			0xFE, 0x0F, //  ###########
			0xFE, 0x0F, //  ###########
			0x0E, 0x00, //  ###
			0x0E, 0x00, //  ###
			0x0E, 0x00, //  ###
			0x0E, 0x00, //  ###
			0x0E, 0x00, //  ###
			0x0E, 0x00, //  ###
			0xFE, 0x03, //  #########
			0xFE, 0x07, //  ##########
			0x00, 0x0F, //         ####
			0x00, 0x1E, //          ####
			0x00, 0x1C, //           ###
			0x00, 0x1C, //           ###
			0x00, 0x1C, //           ###
			0x00, 0x1C, //           ###
			0x00, 0x0E, //          ###
			0x03, 0x0F, // ##      ####
			0xFF, 0x07, // ###########
			0xFC, 0x01, //   #######

			// @240 '6' (13 pixels wide)
			0xE0, 0x07, //      ######
			0xF8, 0x0F, //    #########
			0x3C, 0x08, //   ####     #
			0x1C, 0x00, //   ###
			0x0E, 0x00, //  ###
			0x0E, 0x00, //  ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0xE7, 0x03, // ###  #####
			0xFF, 0x0F, // ############
			0x0F, 0x0E, // ####     ###
			0x07, 0x1C, // ###       ###
			0x07, 0x1C, // ###       ###
			0x07, 0x1C, // ###       ###
			0x07, 0x1C, // ###       ###
			0x07, 0x1C, // ###       ###
			0x0E, 0x0E, //  ###     ###
			0x1E, 0x0F, //  ####   ####
			0xFC, 0x07, //   #########
			0xF0, 0x01, //     #####

			// @280 '7' (13 pixels wide)
			0xFF, 0x1F, // #############
			0xFF, 0x1F, // #############
			0x00, 0x1C, //           ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x06, //          ##
			0x00, 0x07, //         ###
			0x00, 0x07, //         ###
			0x80, 0x03, //        ###
			0x80, 0x03, //        ###
			0xC0, 0x01, //       ###
			0xC0, 0x01, //       ###
			0xC0, 0x00, //       ##
			0xE0, 0x00, //      ###
			0xE0, 0x00, //      ###
			0x70, 0x00, //     ###
			0x70, 0x00, //     ###
			0x38, 0x00, //    ###
			0x38, 0x00, //    ###
			0x18, 0x00, //    ##

			// @320 '8' (14 pixels wide)
			0xF0, 0x03, //     ######
			0xFC, 0x0F, //   ##########
			0x1C, 0x1E, //   ###    ####
			0x0E, 0x1C, //  ###      ###
			0x0E, 0x1C, //  ###      ###
			0x0E, 0x1C, //  ###      ###
			0x1E, 0x1C, //  ####     ###
			0x3C, 0x0E, //   ####   ###
			0xF8, 0x07, //    ########
			0xF0, 0x01, //     #####
			0xF8, 0x07, //    ########
			0x3C, 0x0F, //   ####  ####
			0x0E, 0x1C, //  ###      ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x07, 0x38, // ###        ###
			0x0E, 0x1C, //  ###      ###
			0xFE, 0x0F, //  ###########
			0xF8, 0x03, //    #######

			// @360 '9' (13 pixels wide)
			0xF0, 0x01, //     #####
			0xFC, 0x07, //   #########
			0x1E, 0x0F, //  ####   ####
			0x0E, 0x0E, //  ###     ###
			0x07, 0x0E, // ###      ###
			0x07, 0x1C, // ###       ###
			0x07, 0x1C, // ###       ###
			0x07, 0x1C, // ###       ###
			0x07, 0x1C, // ###       ###
			0x0E, 0x1E, //  ###     ####
			0xFE, 0x1F, //  ############
			0xF8, 0x1D, //    ###### ###
			0x00, 0x1C, //           ###
			0x00, 0x1C, //           ###
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x07, //         ###
			0x82, 0x07, //  #     ####
			0xFE, 0x03, //  #########
			0xFC, 0x00, //   ######

			// @400 ':' (3 pixels wide)
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x07, // ###
			0x07, // ###
			0x07, // ###
			0x07, // ###
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x07, // ###
			0x07, // ###
			0x07, // ###
			0x07, // ###

};

// Character descriptors for Calibri 24pt
// { [Char width in bits], [Offset into calibri_24ptCharBitmaps in bytes] }
FontChar_t calibri_24ptDescriptors[] =
{
	{14, 0}, 		// 0
	{14, 40}, 		// 1
	{14, 80}, 		// 2
	{14, 120}, 		// 3
	{14, 160}, 		// 4
	{14, 200}, 		// 5
	{13, 240}, 		// 6
	{13, 280}, 		// 7
	{14, 320}, 		// 8
	{14, 360}, 		// 9
	{3, 400}, 		// :
};

