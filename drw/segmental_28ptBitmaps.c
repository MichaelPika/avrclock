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
unsigned char segmental_28ptBitmaps[] PROGMEM =
{
		// @0 '0' (14 pixels wide)
			0xFC, 0x0F, //   ###########
			0xFe, 0x1F, //  #############
			0xFF, 0x3F, // ###############
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###  	   ###
			0x02, 0x10, //  #			#
			0x02, 0x10, //  #			#
			0x02, 0x10, //  #			#
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0xFF, 0x3F, // ###############
			0xFE, 0x1F, //  #############
			0xFC, 0x0F, //   ###########

			// @52 '1' (13 pixels wide)
			0x00, 0x10, // 				 #
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x10, // 				 #
			0x00, 0x10, // 				 #
			0x00, 0x10, // 				 #
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x10, // 				 #

			// @104 '2' (15 pixels wide)
			0xFE, 0x0F, //  ############
			0xFf, 0x1F, // ##############
			0xFE, 0x3F, //  ##############
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	       ###
			0x00, 0x38, //  	  	   ###
			0xFc, 0x3F, //   #############
			0xFE, 0x1F, //  #############
			0xFf, 0x0F, // #############
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0xFF, 0x1F, // ##############
			0xFE, 0x3F, //  ##############
			0xFC, 0x1F, //   ############

			// @156 '3' (14 pixels wide)
			0xFE, 0x0F, //  ############
			0xFf, 0x1F, // ##############
			0xFE, 0x3F, //  ##############
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //      	   ###
			0xFE, 0x1F, //  #############
			0xFf, 0x1F, // ##############
			0xFE, 0x1F, //  #############
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0xFE, 0x3F, //  ##############
			0xFf, 0x1F, // ##############
			0xFE, 0x0F, //  ############

			// @208 '4' (15 pixels wide)
			0x02, 0x10, //  #			#
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###  	   ###
			0xFF, 0x1F, // ##############
			0xFE, 0x1F, //  #############
			0xFC, 0x1F, //   ############
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x10, //  			#

			// @260 '5' (15 pixels wide)
			0xFC, 0x1F, //   ############
			0xFe, 0x3F, //  ##############
			0xFF, 0x1F, // ##############
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0xFF, 0x0F, // #############
			0xFE, 0x1F, //  #############
			0xFC, 0x3F, //   #############
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0x00, 0x38, //             ###
			0xFE, 0x3F, //  ##############
			0xFf, 0x1F, // ##############
			0xFE, 0x0F, //  ############

			// @312 '6' (15 pixels wide)
			0xFC, 0x1F, //   ############
			0xFe, 0x3F, //  ##############
			0xFF, 0x1F, // ##############
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0xFE, 0x0F, //  ############
			0xFE, 0x1F, //  #############
			0xFE, 0x3F, //  ##############
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0xFF, 0x3F, // ###############
			0xFE, 0x1F, //  #############
			0xFC, 0x0F, //   ###########

			// @364 '7' (13 pixels wide)
			0xFE, 0x0F, //  ############
			0xFf, 0x1F, // ##############
			0xFE, 0x3F, //  ##############
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x10, // 				 #
			0x00, 0x10, //				 #
			0x00, 0x10, // 				 #
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x38, // 				###
			0x00, 0x10, // 				 #

			// @416 '8' (15 pixels wide)
			0xFC, 0x0F, //   ###########
			0xFe, 0x1F, // ##############
			0xFF, 0x3F, // ###############
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###  	   ###
			0xFE, 0x1F, //  #############
			0xFE, 0x1F, //  #############
			0xFE, 0x1F, //  #############
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0xFF, 0x3F, // ###############
			0xFE, 0x1F, // ##############
			0xFC, 0x0F, //  ############

			// @468 '9' (15 pixels wide)
			0xFC, 0x0F, //   ###########
			0xFe, 0x1F, // ##############
			0xFF, 0x3F, // ###############
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###         ###
			0x07, 0x38, // ###  	   ###
			0xFF, 0x1F, // ##############
			0xFE, 0x1F, //  #############
			0xFC, 0x1F, //   ############
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0x07, 0x38, //             ###
			0xFE, 0x3F, //  ##############
			0xFf, 0x1F, // ##############
			0xFE, 0x0F, //  ############

			// @520 'C' (14 pixels wide)
			0xFC, 0x0F, //   ###########
			0xFe, 0x1F, // ##############
			0xFF, 0x3F, // ###############
			0x07, 0x38, // ###         ###
			0x07, 0x10, // ###			#
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x03, 0x00, //  ##
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x00, // ###
			0x07, 0x10, // ###			#
			0x07, 0x38, // ###         ###
			0xFF, 0x3F, // ###############
			0xFE, 0x1F, // ##############
			0xFC, 0x0F, //  ############
};

// Character descriptors for Segmental 28pt
// { [Char width in bits], [Offset into segmental_28ptCharBitmaps in bytes] }

FontChar_t segmental_28ptDescriptors[] =
{
		{14, 0}, 		// 0
		{14, 54}, 		// 1
		{14, 108}, 		// 2
		{14, 162}, 		// 3
		{14, 216}, 		// 4
		{14, 270}, 		// 5
		{14, 324}, 		// 6
		{14, 378}, 		// 7
		{14, 432}, 		// 8
		{14, 486}, 		// 9
		{0, 540}, 		// :
		{0, 0}, 		// ;
		{0, 0}, 		// <
		{0, 0}, 		// =
		{0, 0}, 		// >
		{0, 0}, 		// ?
		{0, 0}, 		// @
		{0, 0}, 		// A
		{0, 0}, 		// B
		{14, 540}, 		// C
		{14, 594}, 		// end
};
