/***********************************************************************/
/*                                                                     */
/*  FILE        :loop_10.c　　                                         */
/*  DESCRIPTION :フィボナッチ数列を作成する                            */
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
unsigned long long int 	fibonacci(void);

/* main()：メイン処理 */
void main(void)
{
	/* ローカル変数の定義 */
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;
	unsigned long long int 	fiboValue;	//フィボナッチ数
	unsigned long long int 	fiboValue_1;	//ひとつ前のフィボナッチ数
	float		ratio;	//黄金比

	/* 検査開始メッセージを出力する */
	printf("\n\nWelcom to"  " Fibonacci world");	//計算開始メッセージ
	
	/* entry */
	j = 1;
	fiboValue_1 = 1;

	/* do */
	while(1){
		/* 計算回数を入力する */
		printf("\n       計算回数 = ");
		scanf("%u", &count);
		
		/* 計算終了コードをチェックする */
		if(count == 999)
			break;

		/* 計算回数まで検査する */
		for(i = 0 ; i < count; ++i, ++j){
			if ( (fiboValue = fibonacci()) == 0){
				printf( "計算の限界です\n" );
				break;	//フィボナッチ数がオーバーフロー
			}
			else{
				/* 黄金比を計算する */
				ratio = (float)fiboValue / fiboValue_1;
			}
			/* 計算回数、数列（decimal)、数列(Hex)、黄金比を出力する */
			printf("No.%3d %25llu (0x%16llx)  %f\n", j, fiboValue, fiboValue, ratio);
			
			fiboValue_1 = fiboValue;
		}
		if (fiboValue == 0)
			break;
	}
	
	/* exit */
	
	/* 検査終了メッセージを出力する */
	printf("End of Fibonacci world\n");
}

/* fibonacci()：新たなフィボナッチ数を生成する */
unsigned long long int fibonacci(void)
{
	static unsigned long long int fn=0;	//フィボナッチ数　Fn
	static unsigned long long int fn1=1;	//フィボナッチ数　Fn+1
	unsigned long long int	fn2;		//フィボナッチ数　Fn+2

	/* 新しいフィボナッチ数を計算する */
	fn2 = fn + fn1;			//フィボナッチ数の算出　Fn+2 = Fn + Fn+1
	
	/* 32bitのオーバーフローをチェックする */
	if (fn2 < fn1)
		return 0;		//オーバーフロー！！
	else{
		fn = fn1;			//次回の演算のためのFn
		fn1 = fn2;			//次回の演算のためのFn+1
	
		return fn2;
	}
}



