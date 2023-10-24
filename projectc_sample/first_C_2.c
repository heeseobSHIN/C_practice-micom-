
/***********************************************************************/
/*                                                                     */
/*  FILE        :first_C_2.c                                           */
/*  DESCRIPTION :C言語入門　第2章サンプルプログラム                    */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/

#include <stdio.h>

/* 関数プロトタイプ宣言 */
int	count_line(char *);
void 	count_func(char *);
void 	main(void);

/* 関数main() */
void main(void)
{
	#include "textdata.h"
		
	int	line;

	/* entry メッセージを出力 */
	printf("\n Quality of sorce code \n");

	/* 総行数を調べる */
	line = count_line(text);	//総行数をカウントする
	printf("\n SLOC(Souce Line Of Code) = %d\n",line);	// total of lineをを出力する

	/* 関数の行数を調べる */	
	count_func(text);

	while(1);
}

/* textの行数をカウントする */
int 	count_line(char *ptr)
{
	int	count;
	for ( count = 0; *ptr != '\0'; ++ptr){
		if( *ptr == '\n')
			++count;
	}
	return count;	
}


/* 関数内の行数をカウントする */
void 	count_func(char *ptr)
{
	int	count;
	int	stack;
	char	*ptr1;
	
	for ( count = 0; *ptr != '\0'; ++ptr){
		if((*(ptr-1) == '\n') && (*ptr == '{') && ((*(ptr+1)) == '\n')){	//関数ブロックの開始ですか？
			ptr1 = ptr + 2;
			for (count = 0, stack = 1; stack != 0; ++ptr1){
				switch (*ptr1){
				case '{':
					++stack;	//左波括弧検出
					break;
				case '}':
					--stack;	//右波括弧検出
					break;
				case '\n':
					++count;	//
					break;
				default:
					break;
				}
			}
			printf("\n FLOC(Function Line Of Code) = %d \n", count);
		}
	}
}

