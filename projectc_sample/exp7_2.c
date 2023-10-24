
#include <stdio.h>

void main(void);


void sort_array(char *adr);

void main(void)
{
	char array[] = "RX621 Renesa";
	char *ptr;
	
	/* entryメッセージを表示する */
	printf( "\n 文字列\"%s\"のソートを開始します \n", array );

	/* 指定文字列のソートを行う */
	ptr = array;
	
	//---------------------------------
	for (  ; *ptr != '\n' ; ++ptr){
		
		sort_array(array);
	}
	
/*
	while(*ptr != '\0'){
	
		sort_array(array);
		++ptr;
	}
	
*/
	
	printf( "\n 文字列ソートが終了しました \n" );
	
	printf( "\n sort data = \"%s\"",array);	
	
	while(1);
}

void sort_array(char *adr)
{
	char tmp;
	int i = 0;
	while ( adr[i+1] != '\n' ){
		
	
	
		
		if ( adr[i] >  adr[i+1]){
			
			tmp = adr[i];
			adr[i] = adr[i+1];
			adr[i+1] = tmp;
		}
		i++;
		//++ adr;
		
	}
		
	
}


	