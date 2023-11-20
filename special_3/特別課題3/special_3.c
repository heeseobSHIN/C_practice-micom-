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
#include <machine.h>
#include "iodefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif
#define STX 0x00
#define ETX 0x00


char arrayNum[16];
int CKS = 0;
char CK = 0x00;
char MYID;
char get;
int otherID = 0;
char val;

void main(void);
void sw_scan(void);
int sw_check(void);
char segment(int a);
int CheckTSW(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

void main(void)
{
	int stage = 0;
	
	
	
	while(1){
		
		AD0.ADCSR.BIT.ADST = 1;

		while(AD0.ADCSR.BIT.ADST == 1){}

		get = AD0.ADDRA >> 6;
		get = get << 4;
		PORT4.DR.BYTE = ~get;
		
		otherID = CheckTSW();
		segment(otherID);
		
	
		if(IR( CMT1, CMI1 ) == 1){
			
			IR( CMT1, CMI1 ) = 0;
			
			sw_scan();

		}
		
		if(sw_check() == 3 ){
			if(SCI2.SSR.BIT.TDRE == 1){
	
				SCI2.TDR = STX;
				SCI2.TDR = 0x80 + MYID;	
				SCI2.TDR = 0;//volume - ADC;
				SCI2.TDR = ETX;
			}
		}
		

		if(SCI2.SSR.BIT.RDRF == 1){
			switch(stage){
			
				case 0:
				
					if(SCI2.RDR == STX){
						stage = 1;
					}
					break;
				case 1:
				
					if(SCI2.RDR == MYID){
						stage = 2;
					}
					break;
				case 2:
					val = SCI2.RDR;
					stage = 3;
					break;
				case 3:
					if(SCI2.RDR == ETX){
					stage = 0;
					}
					break;
				default:
					break;
			
			}
		}
		
		//on LCD for second line
		
	}
		
		
	
	

}


void sw_scan(void){
	
	CK = CK >> 1;
	if(PORTE.PORT.BIT.B5 == 1){
		
		CK = CK + 0x80;
	}
}
int sw_check(void){
	
/*
0x00 = off継続
0x80 = offエッジ検出
0x01 = on継続
0x81 = onエッジ検出
*/

	if((CK & 0xE0) == 0xE0){
		return 0;
	}
	else if((CK & 0xE0) == 0x80){
		return 1;	
	}
	else if((CK & 0xE0) == 0x00){
		return 2;
	}
	else if((CK & 0xE0) == 0x20){
		return 3;
	}

}

//7seg
char segment(int a){
	char arrayNum[16] = {0xFC,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE4,0xFE,0xF6,0xEE,0x3E,0x1A,0x7A,0x9E,0x8E};
	return PORTC.DR.BYTE = ~arrayNum[a];
}


//T_SW return
int CheckTSW(void){
	if(PORTA.PORT.BIT.B2 == 1 && PORTA.PORT.BIT.B3 == 1){
		return 0;
	}else if(PORTA.PORT.BIT.B2 == 0 && PORTA.PORT.BIT.B3 == 1){
		return 1;
	}else if(PORTA.PORT.BIT.B2 == 1 && PORTA.PORT.BIT.B3 == 0){
		return 2;
	}else if(PORTA.PORT.BIT.B2 == 0 && PORTA.PORT.BIT.B3 == 0){
		return 3;
	}
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
