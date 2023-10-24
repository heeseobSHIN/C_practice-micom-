
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_04.c                                           */
/*  DESCRIPTION :簡単な計算機 改良４                                   */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:連続処理、標準入力装置からデータをセット、入力エラー判定      */
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

	while(1){
		/* 計算方法を入力する */
		printf("\n計算番号=");
		scanf("%d",&calc);
		
		if(calc == 9)				//終了チェック
			break;
		else if(calc > 3)		
			printf("\n\n Invalid!");	//エラー
		else{
			printf("\n  arg1=");
			scanf("%f",&arg1);		// 被演算値 arg1を入力する	
			
			printf("\n  arg2=");
			scanf("%f",&arg2);		// 演算値 arg2を入力する			
			
			/* 計算 */
			switch (calc){
			case 0:
				result = arg1 + arg2;	//加算する
				break;
			case 1:
				result = arg1 - arg2;	//減算する
				break;
			case 2:
				result = arg1 * arg2;	//乗算する
				break;
			case 3:
				result = arg1 / arg2;	//除算する
				break;
			default:
				break;
			}
			
			/* 計算結果の出力 */
			printf("\n arg1=%f(0x%x)  arg2=%f(0x%x)  result=%f(0x%x)",arg1,arg1,arg2,arg2,result,result);
		}
	}
	
	/* 処理終了メッセージ */
	printf("\n\n--- end ---");
	
	while(1)
		;
}