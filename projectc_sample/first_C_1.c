
#include <stdio.h>


void main(void);


void sort_array(char *adr);


void main(void)
{
	char array[] = "zergpower08starcARFTSDGERRHADFNRSNZAAsgbaeb ";
	char *ptr;
	
	
	printf( "\n 文字列\"%s\"のソートを開始します \n", array );

	
	ptr = array;
	for (  ; *ptr != '\0'; ++ptr){
		
		sort_array(array);
	}
	
	
	printf( "\n 文字列ソートが終了しました \n" );
	
	printf( "\n sort data = \"%s\"",array);	
	
	while(1);
}


void sort_array(char *adr)
{
	char tmp;
	
	while ( *(adr+1) != '\0' ){
		if ( *adr> *(adr+1)){
			tmp = *adr;
			*adr = *(adr + 1);
			*(adr + 1) = tmp;
		}
		++ adr;
	}
		
	
}


	