
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_01.c                                           */
/*  DESCRIPTION :簡単な計算機                                          */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#include <stdio.h>

void main(void);

/* メイン処理	 */
void main(void)
{
	unsigned char	calc;	//計算指定	0 加算
				//		1 減算
				//		2 乗算
				//		3 除算

	short	arg1,arg2;	//計算対象	0→ arg1 + arg2 
				//		1→ arg1 - arg2 
				//		2→ arg1 * arg2
				//		3→ arg1 / arg2 
	int	result;		//計算結果

	/* 計算方法を指定する */
	calc = 3;
	arg1 = 0xffff;
	arg2 = 0x7fff;
	
	/* 計算 */
	if (calc == 0)
		result = arg1 + arg2;		//加算する
	else if (calc == 1)
		result = arg1 - arg2;		//減算する
	else if (calc == 2)
		result = arg1 * arg2;		//乗算する
	else
		result = arg1 / arg2;		//除算する
	
	/* 計算結果の出力 */
	printf("\n arg1=%d(0x%x)  arg2=%d(0x%x)  result=%d(0x%x)",arg1,arg1,arg2,arg2,result,result);
	
	while(1);

}
