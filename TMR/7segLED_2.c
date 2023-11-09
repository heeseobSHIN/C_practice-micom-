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
	
	//char count = 0x80;
	//char checkt = 0x80; //1000.0000 ?? ????? ?? 01?? ????
	char arrayNum[10] = {0xFC,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE4,0xFE,0xF6};
	
	int sw1 = 0;	//sw1
	int sw2 = 0;	//sw2
	int i = 0;


	while(1){
		
		//sw1ÇÃê›íË
		if(PORTA.PORT.BIT.B3 == 0 && sw1 == 1){
				if(i < 9){
					++i;
				}else{
					i = 0;
				}
					sw1 = 0;	

		}else if(PORTA.PORT.BIT.B3 == 1 && sw1 == 0){
				sw1 = 1;
		}
		//--------------------------------------------------//
		//sw2ÇÃê›íË
		if(PORTA.PORT.BIT.B2 == 0 && sw2 == 1){
				if(i > 0){
					--i;
				}else{
					i = 9;
				}
				sw2 = 0;
		}else if(PORTA.PORT.BIT.B2 == 1 && sw2 == 0){
			sw2 = 1;			
		}	
		//LEDèoóÕ		
		PORTC.DR.BYTE = ~arrayNum[i];
	
	}
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
