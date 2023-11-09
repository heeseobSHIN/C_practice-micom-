
#include <stdio.h>
#include <string.h>


void main(void);


void sort_array(char *adr);


void main(void)
{
	char *ptr = "RX621 Renesas ";
	char sec[14];
	int i = 0;
	//char array[] = "RX621 Renesas ";
	//char *ptr;
	
	strcpy(sec, ptr);
	
	printf( "\n 文字列\"%s\"のソートを開始します \n", sec );

	
	//ptr = array;
	for (  ; sec[i] != '\0'; (i++)){
		
		sort_array(sec);
	}
	
	
	printf( "\n 文字列ソートが終了しました \n" );
	
	printf( "\n sort data = \"%s\"", sec);	
	
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


	