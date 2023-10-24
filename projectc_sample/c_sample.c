
/***********************************************************************/
/*                                                                     */
/*  FILE        c_sample.c                                             */
/*  DESCRIPTION :sample_01 文字の出現回数を調査するプログラム          */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:英数字とスペース以外を入力した場合は、エラーとして処理を中止  */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#include <stdio.h>

void main(void);


void main(void)
{
	unsigned char	msg[80];		//入力したメッセージの保存
	unsigned char	cnt_012 = 0;		//数字文字('0'-'9')の出現回数
	unsigned char	cnt_ABC = 0;		//英字大文字('A'-'Z')の出現回数
	unsigned char	cnt_abc = 0;		//英字小文字('a'-'z')の出現回数
	unsigned char	cnt_space = 0;		//スペース文字の出現回数
	
	int	i;

	
	/* タイトルメッセージを表示する */
	
	printf("\n--- check occurrences of character ! ---");
	
	
	/* 調査対象となるメッセージの入力を促す */
	
	printf("\n\n please input message = ");
	scanf("%[^\n]",msg);
	
	/* 調査対象となるメッセージの出現回数を調査する */
	for (i = 0; msg[i] != '\0'; ++i){
		if (msg[i] < '0' && msg[i] > 'z' || msg[i] > '9' && msg[i] < 'A' || msg[i] > 'Z' && msg[i] < 'a'){
			printf("\n  **** input error ! ***");	//入力エラー
			break;
		}else if (msg[i] >= '0' && msg[i] <= '9')
			++cnt_012;
		else if (msg[i] >= 'A' && msg[i] <= 'Z')
			++cnt_ABC;
		else if (msg[i] >= 'a' && msg[i] <= 'z')
			++cnt_abc;					
		else
			++cnt_space;
	}
	
	/* 結果を出力する */
	
	printf("\n numeric  %2d:", cnt_012);
	for (i = 0; i < cnt_012; ++i)
		printf("%c",'8');
		
	printf("\n ALPHABET %2d:", cnt_ABC);
	for (i = 0; i < cnt_ABC; ++i)
		printf("%c",'A');		

	printf("\n alphabet %2d:", cnt_abc);
	for (i = 0; i < cnt_abc; ++i)
		printf("%c",'a');
		
	printf("\n spacr    %2d:", cnt_space);
	for (i = 0; i < cnt_space; ++i)
		printf("%c",'.');		
	while(1);	
	
	
	
}


