
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_01.c                                           */
/*  DESCRIPTION :ŠÈ’P‚ÈŒvZ‹@                                          */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:                                                              */
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

	short	arg1,arg2;	//ŒvZ‘ÎÛ	0¨ arg1 + arg2 
				//		1¨ arg1 - arg2 
				//		2¨ arg1 * arg2
				//		3¨ arg1 / arg2 
	int	result;		//ŒvZŒ‹‰Ê

	/* ŒvZ•û–@‚ğw’è‚·‚é */
	calc = 3;
	arg1 = 0xffff;
	arg2 = 0x7fff;
	
	/* ŒvZ */
	if (calc == 0)
		result = arg1 + arg2;		//‰ÁZ‚·‚é
	else if (calc == 1)
		result = arg1 - arg2;		//Œ¸Z‚·‚é
	else if (calc == 2)
		result = arg1 * arg2;		//æZ‚·‚é
	else
		result = arg1 / arg2;		//œZ‚·‚é
	
	/* ŒvZŒ‹‰Ê‚Ìo—Í */
	printf("\n arg1=%d(0x%x)  arg2=%d(0x%x)  result=%d(0x%x)",arg1,arg1,arg2,arg2,result,result);
	
	while(1);

}
