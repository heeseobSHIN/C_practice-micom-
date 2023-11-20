/**********************************************************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
 * other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
 * applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
 * EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
 * SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO
 * THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link:
 * http://www.renesas.com/disclaimer
 *
 * Copyright (C) 2020 Renesas Electronics Corporation. All rights reserved.
 *********************************************************************************************************************/
/************************************************************************
*
* Device     : RX/RX600/RX621,RX62N
*
* File Name  : hwsetup.c
*
* Abstract   : Hardware Setup file.
*
* History    : 1.00  (2010-03-05)  [Hardware Manual Revision : 0.50]
*
* NOTE       : THIS IS A TYPICAL EXAMPLE.
*
* Copyright (C) 2009 Renesas Electronics Corporation.
* and Renesas Solutions Corporation. All rights reserved.
*
************************************************************************/

#include "iodefine.h"
#ifdef __cplusplus
extern "C" {
#endif
extern void HardwareSetup(void);
#ifdef __cplusplus
}
#endif

void HardwareSetup(void)
{

	
	SYSTEM.SCKCR.LONG = 0x20100;
	
	/*	コンペアマチタイマ	*/
	MSTP( CMT0 ) = 0;
	MSTP( CMT1 ) = 0;
	
	IPR( CMT0, CMI0 ) = 1;	
	CMT0.CMCOR = 48000000/512/100 - 1;  // 10ms setting
	CMT0.CMCR.WORD = 0x0043;	
	IEN( CMT0, CMI0 ) = 1;		
	CMT.CMSTR0.BIT.STR0 = 1;
	
	IPR( CMT1, CMI1 ) = 0;	
	CMT1.CMCOR = 48000000/512/50 - 1;  // 20ms setting
	CMT1.CMCR.WORD = 0x0043;	
	IEN( CMT1, CMI1 ) = 0;		
	CMT.CMSTR0.BIT.STR1 = 1;
	
	//volume start
	AD0.ADCSR.BIT.ADST = 1;
	
	//7seg
	PORTC.DDR.BYTE = 0xFF;
	
	//led setup
	PORT4.DR.BYTE = 0XF0;
	PORT4.DDR.BYTE = 0xF0;	
	
	//T_SW setup
	PORTA.ICR.BIT.B3 = 1;
	PORTA.ICR.BIT.B2 = 1;
	
	//user_SW setup
	PORTE.ICR.BIT.B5 = 1;
	
	//ブザー init setup
	PORT2.DR.BIT.B2 = 1;
	PORT2.DDR.BIT.B2 = 1;
	

 	//ブザー
 	TMR0.TCR.BIT.CCLR = 0x1;
	TMR0.TCCR.BIT.CSS = 1;
	TMR0.TCCR.BIT.CKS = 5;
	TMR0.TCSR.BIT.OSA = 0x03;
	TMR0.TCSR.BIT.OSB = 0x03;
	TMR0.TCORA = 0x46;
	TMR0.TCORB = 0x30;
	

}
