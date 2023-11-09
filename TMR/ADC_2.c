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
/***********************************************************************/
/*                                                                     */
/*  FILE        :Main.c or Main.cpp                                    */
/*  DATE        :Tue, Oct 31, 2006                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :                                                      */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#include "machine.h"
#include "iodefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

void main(void)
{
	
	//char get;
	SYSTEM.SCKCR.LONG = 0x20100;
	
	/*	コンペアマチタイマ	*/
	
	MSTP( CMT0 ) = 0;		
	SYSTEM.MSTPCRA.BIT.MSTPA23 = 0;
	SYSTEM.MSTPCRA.BIT.MSTPA5 = 0;
	
	IR(CMT0 , CMI0) = 0;
	IPR( CMT0, CMI0 ) = 1;	
	CMT0.CMCOR = 48000000/512/5 - 1;// CMCOR is 20ms Count 	
	CMT0.CMCR.WORD = 0x0043;	
	IEN( CMT0, CMI0 ) = 1;		
	CMT.CMSTR0.BIT.STR0 = 1;
	
	/*--------------------------------*/
/*
	//volume start
	AD0.ADCSR.BIT.ADST = 1;
	
	
	//led setup
	PORT4.ICR.BIT.B0 = 1;
	PORT4.DDR.BYTE = 0xF0;	
*/
	
	//SW setup
	PORTA.PORT.BIT.B3 = 1;
	
	//ブザー init setup
	PORT2.DR.BIT.B2 = 1;
	PORT2.DDR.BIT.B2 = 1;
	

 	//ブザー
	/*
 	TMR0.TCR.BIT.CCLR = 0x1;
	TMR0.TCCR.BIT.CSS = 1;
	TMR0.TCCR.BIT.CKS = 5;
	TMR0.TCSR.BIT.OSA = 0x03;
	TMR0.TCSR.BIT.OSB = 0x03;
	TMR0.TCORA = 0x46;
	*/
	
	while(1);
		
		
	
		
		//volume btn
/*
		AD0.ADCSR.BIT.ADST = 1;

		while(AD0.ADCSR.BIT.ADST == 1){}
			
		
			led
			get = AD0.ADDRA >> 6;
			get = get << 4;
			PORT4.DR.BYTE = ~get;
			
			TMR0.TCORB = (float)TMR0.TCORA/0x3FF*AD0.ADDRA;
*/
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
