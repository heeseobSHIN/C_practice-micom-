/***********************************************************************/
/*                                                                     */
/*  FILE        first_C.c                                              */
/*  DESCRIPTION :文字列をソートするプログラム                          */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/
#include <stdio.h>

/* 関数プロトタイプ宣言 */

/***********************************************************************/
/*                                                                     */
/*  FUNCTION	main()                                                 */
/*  DESCRIPTION :メイン関数                                            */
/*  PARAMETER   :void                                                  */
/*  RETURN	:void                                                  */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/
void main(void);

/***********************************************************************/
/*                                                                     */
/*  FUNCTION	sort_array()                                           */
/*  DESCRIPTION :隣り合う文字を昇順に入れ替える                        */
/*  PARAMETER   :char * 	対象とする文字列の先頭アドレス         */
/*  RETURN	:void                                                  */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/
void sort_array(char *adr);

/* メイン関数 */
void main(void)
{
	char array[] = "zergpower08starcARFTSDGERRHADFNRSNZAAsgbaeb ";
	char *ptr;
	
	/* entryメッセージを表示する */
	printf( "\n 文字列\"%s\"のソートを開始します \n", array );

	/* 指定文字列のソートを行う */
	ptr = array;
	//for (  ; *ptr != '\0'; ++ptr){
		/* 隣り合う文字を昇順に入れ替える */
		//sort_array(array);
	//}
	
	/* 指定文字列のソートを行うwhile */
	while(*ptr != '\0'){
	
		sort_array(array);
		++ptr;
	}
	
	/* exitメッセージを表示する */
	printf( "\n 文字列ソートが終了しました \n" );
	/*  ソート済文字列の結果表示する */
	printf( "\n sort data = \"%s\"",array);	
	
	//while(1);
	for(;1;);
}

/* 隣り合う文字を昇順に入れ替える関数 */
void sort_array(char *adr)
{
	char tmp;
	
	//while ( *(adr+1) != '\0' ){
	//	if ( *adr> *(adr+1)){
	//		tmp = *adr;
	//		*adr = *(adr + 1);
	//		*(adr + 1) = tmp;
	//	}
	//	++ adr;
	//}
	
	for(; *(adr+1) != '\0' ;++ adr ){
		
	/*
		if ( *adr> *(adr+1)){
			tmp = *adr;
		*adr = *(adr + 1);
			*(adr + 1) = tmp;
		}
		
	*/
		
		if ( *adr <=  *(adr+1)){
			
		}else{
			tmp = *adr;
			*adr = *(adr + 1);
			*(adr + 1) = tmp;
		}
	}
		
	
}


	