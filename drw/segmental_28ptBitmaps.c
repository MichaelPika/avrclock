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

// Character bitmaps for Segmental 28pt
unsigned char segmental_28ptBitmaps[] PROGMEM  =
{
		// @0 '0' (14 pixels wide)
			0xFC, 0x1F, //   ###########
			0x7F, 0x3F, // ####### ######
			0x07, 0x3C, // ###       ####
			0x07, 0x3C, // ###       ####
			0x07, 0x3C, // ###       ####
			0x07, 0x3C, // ###       ####
			0x07, 0x3E, // ###      #####
			0x07, 0x36, // ###      ## ##
			0x07, 0x36, // ###      ## ##
			0x07, 0x36, // ###      ## ##
			0x07, 0x36, // ###      ## ##
			0x07, 0x33, // ###     ##  ##
			0x03, 0x30, // ##          ##
			0x00, 0x00, //
			0x37, 0x30, // ### ##      ##
			0x37, 0x30, // ### ##      ##
			0x37, 0x30, // ### ##      ##
			0x3F, 0x30, // ######      ##
			0x3F, 0x30, // ######      ##
			0x1F, 0x30, // #####       ##
			0x1F, 0x30, // #####       ##
			0x1F, 0x30, // #####       ##
			0x0F, 0x30, // ####        ##
			0x0F, 0x30, // ####        ##
			0x3E, 0x3E, //  #####   #####
			0x7E, 0x1F, //  ###### #####

			// @52 '1' (13 pixels wide)
			0x7E, 0x00, //  ######
			0x7F, 0x00, // #######
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
			0x60, 0x00, //      ##
			0x00, 0x00, //
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
			0xFE, 0x0F, //  ###########
			0xFF, 0x1F, // #############

			// @104 '2' (15 pixels wide)
			0xFC, 0x1F, //   ###########
			0x7E, 0x3F, //  ###### ######
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x7C, 0x7F, //   ##### #######
			0xFE, 0x3F, //  #############
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x7F, 0x1F, // ####### #####
			0xFE, 0x3F, //  #############

			// @156 '3' (14 pixels wide)
			0xFE, 0x0F, //  ###########
			0xBF, 0x1F, // ###### ######
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0xBE, 0x3F, //  ##### #######
			0xFF, 0x1F, // #############
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0x00, 0x38, //            ###
			0xBE, 0x1F, //  ##### ######
			0xFF, 0x0F, // ############

			// @208 '4' (15 pixels wide)
			0x00, 0x00, //
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x7C, 0x1F, //   ##### #####
			0xFE, 0x3F, //  #############
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x00, //

			// @260 '5' (15 pixels wide)
			0xFC, 0x1F, //   ###########
			0x7F, 0x3F, // ####### ######
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x7F, 0x1F, // ####### #####
			0xFE, 0x3F, //  #############
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x7C, 0x3F, //   ##### ######
			0xFE, 0x1F, //  ############

			// @312 '6' (15 pixels wide)
			0xFC, 0x1F, //   ###########
			0x7F, 0x3F, // ####### ######
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x7F, 0x1F, // ####### #####
			0xFE, 0x3F, //  #############
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x7F, 0x3F, // ####### ######
			0xFE, 0x1F, //  ############

			// @364 '7' (13 pixels wide)
			0xFE, 0x0F, //  ###########
			0xBF, 0x1F, // ###### ######
			0x00, 0x0C, //           ##
			0x00, 0x0E, //          ###
			0x00, 0x0E, //          ###
			0x00, 0x0F, //         ####
			0x00, 0x07, //         ###
			0x00, 0x07, //         ###
			0x80, 0x03, //        ###
			0x80, 0x03, //        ###
			0x80, 0x01, //        ##
			0x80, 0x01, //        ##
			0x00, 0x00, //
			0x00, 0x00, //
			0x00, 0x00, //
			0x30, 0x00, //     ##
			0x38, 0x00, //    ###
			0x38, 0x00, //    ###
			0x38, 0x00, //    ###
			0x1C, 0x00, //   ###
			0x1C, 0x00, //   ###
			0x0E, 0x00, //  ###
			0x0E, 0x00, //  ###
			0x06, 0x00, //  ##
			0x00, 0x00, //
			0x00, 0x00, //

			// @416 '8' (15 pixels wide)
			0xFC, 0x1F, //   ###########
			0x7F, 0x3F, // ####### ######
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x7F, 0x7F, // ####### #######
			0xFE, 0x3F, //  #############
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x7F, 0x3F, // ####### ######
			0xFE, 0x1F, //  ############

			// @468 '9' (15 pixels wide)
			0xFC, 0x1F, //   ###########
			0x7F, 0x3F, // ####### ######
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x07, 0x70, // ###         ###
			0x7F, 0x7F, // ####### #######
			0xFE, 0x3F, //  #############
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x00, 0x70, //             ###
			0x7C, 0x3F, //   ##### ######
			0xFE, 0x1F, //  ############

			// @520 ':' (4 pixels wide)
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x0F, // ####
			0x0F, // ####
			0x0F, // ####
			0x0F, // ####
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x00, //
			0x0F, // ####
			0x0F, // ####
			0x0F, // ####
			0x0F, // ####
};

// Character descriptors for Segmental 28pt
// { [Char width in bits], [Offset into segmental_28ptCharBitmaps in bytes] }

FontChar_t segmental_28ptDescriptors[] =
{
		{14, 0}, 		// 0
		{13, 52}, 		// 1
		{15, 104}, 		// 2
		{14, 156}, 		// 3
		{15, 208}, 		// 4
		{15, 260}, 		// 5
		{15, 312}, 		// 6
		{13, 364}, 		// 7
		{15, 416}, 		// 8
		{15, 468}, 		// 9
		{4, 520}, 		// :
};

