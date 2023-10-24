/***********************************************************************/
/*                                                                     */
/*  FILE        :loop_11.c　　                                         */
/*  DESCRIPTION :素数かどうかのチェック                                */
/*  CPU TYPE    :RX62N                                                 */
/*                                                                     */
/*  NOTE:                                                            　*/
/*                                                                     */
/***********************************************************************/

/* include file */
#include <stdio.h>
#include <machine.h>

/* 置き換えマクロ定義 */

/* 関数プロトタイプ宣言 */
void	 	main(void);

/* main()：メイン処理 */
void main(void)
{
	int	i;
	int	j;
	int	primeNo;
	int	counter;
	
	/* 開始メッセージを出力する */
	printf("prime numberの調査\n");
	
	primeNo = 0;
	j = 2;
	
	while(1){
		/* 調査対象個数を出力する */
		printf("調査対象個数 =");
		scanf("%d",&counter);
		
		if (counter == 999)	//終了コードをチェックする
			break;

		/* 調査対象個数分を繰り返す */
		for ( i = 1; i < counter; ++i, ++primeNo){
			/* 対象となる数値は素数か */
			for ( j = 2 ; j < primeNo; ++j){
				if ( primeNo % j )
					;
				else
					break;	//素数ではない
			}
			if ( j == primeNo )
				printf ("%8d\n", primeNo);
		}
	}
	
	/* 終了メッセージを出力する */
	printf("prime numberの調査は終了\n");	
}
	
