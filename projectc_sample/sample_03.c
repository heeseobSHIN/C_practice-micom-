
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_03.c                                           */
/*  DESCRIPTION :ŠÈ’P‚ÈŒvZ‹@ ‰ü—Ç‚R                                   */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:‘I‘ğ•¶(switch)                                  */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#include <stdio.h>

void main(void);

/* ƒƒCƒ“ˆ—	 */
void main(void)
{
	unsigned char	calc;	//ŒvZw’è	0 ‰ÁZ
				//		1 Œ¸Z
				//		2 æZ
				//		3 œZ

	float	arg1,arg2;	//ŒvZ‘ÎÛ	0¨ arg1 + arg2 
				//		1¨ arg1 - arg2 
				//		2¨ arg1 * arg2
				//		3¨ arg1 / arg2 

	float	result;		//ŒvZŒ‹‰Ê

	/* ŒvZ•û–@‚ğw’è‚·‚é */
	calc = 4;
	arg1 = 100;
	arg2 = -3.0;
	
	/* ŒvZ */
	switch (calc){
	case 0:
		result = arg1 + arg2;		//‰ÁZ‚·‚é
		break;
	case 1:
		result = arg1 - arg2;		//Œ¸Z‚·‚é
		break;
	case 2:
		result = arg1 * arg2;		//æZ‚·‚é
		break;
	case 3:
		result = arg1 / arg2;		//œZ‚·‚é
		break;
	default:
		break;
	}
	
	/* ŒvZŒ‹‰Ê‚Ìo—Í */
	printf("\n arg1=%f(0x%x)  arg2=%f(0x%x)  result=%f(0x%x)",arg1,arg1,arg2,arg2,result,result);
	
	while(1);
}