
#include <stdio.h>

void main(void);


void sort_array(char *adr);

void main(void)
{
	char array[] = "RX621 Renesa";
	char *ptr;
	
	/* entry���b�Z�[�W��\������ */
	printf( "\n ������\"%s\"�̃\�[�g���J�n���܂� \n", array );

	/* �w�蕶����̃\�[�g���s�� */
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
	
	printf( "\n ������\�[�g���I�����܂��� \n" );
	
	printf( "\n sort data = \"%s\"",array);	
	
	while(1);
}

void sort_array(char *adr)
{
	char tmp;
	
	while ( *(adr+1) != '\n' ){
			//---------------------------------
	
		if ( *adr <= *(adr+1)){
			 tmp = *(adr + 1);
			 *(adr + 1) = *adr ;
			tmp = *adr;
		}
		
	
		/*
		if ( *adr >  *(adr+1)){
			
		
			tmp = *adr;
			*adr = *(adr + 1);
			*(adr + 1) = tmp;
		}
	
		++ adr;
		*/
	}
		
	
}


	