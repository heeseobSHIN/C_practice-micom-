
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_03.c                                           */
/*  DESCRIPTION :簡単な計算機 改良３                                   */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:選択文(switch)                                  */
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

	float	arg1,arg2;	//計算対象	0→ arg1 + arg2 
				//		1→ arg1 - arg2 
				//		2→ arg1 * arg2
				//		3→ arg1 / arg2 

	float	result;		//計算結果

	/* 計算方法を指定する */
	calc = 4;
	arg1 = 100;
	arg2 = -3.0;
	
	/* 計算 */
	switch (calc){
	case 0:
		result = arg1 + arg2;		//加算する
		break;
	case 1:
		result = arg1 - arg2;		//減算する
		break;
	case 2:
		result = arg1 * arg2;		//乗算する
		break;
	case 3:
		result = arg1 / arg2;		//除算する
		break;
	default:
		break;
	}
	
	/* 計算結果の出力 */
	printf("\n arg1=%f(0x%x)  arg2=%f(0x%x)  result=%f(0x%x)",arg1,arg1,arg2,arg2,result,result);
	
	while(1);
}