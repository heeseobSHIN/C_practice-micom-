/***********************************************************************/
/*                                                                     */
/*  FILE        first_C.c                                              */
/*  DESCRIPTION :��������\�[�g����v���O����                          */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/
#include <stdio.h>

/* �֐��v���g�^�C�v�錾 */

/***********************************************************************/
/*                                                                     */
/*  FUNCTION	main()                                                 */
/*  DESCRIPTION :���C���֐�                                            */
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
/*  DESCRIPTION :�ׂ荇�������������ɓ���ւ���                        */
/*  PARAMETER   :char * 	�ΏۂƂ��镶����̐擪�A�h���X         */
/*  RETURN	:void                                                  */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/
void sort_array(char *adr);

/* ���C���֐� */
void main(void)
{
	char array[] = "zergpower08starcARFTSDGERRHADFNRSNZAAsgbaeb ";
	char *ptr;
	
	/* entry���b�Z�[�W��\������ */
	printf( "\n ������\"%s\"�̃\�[�g���J�n���܂� \n", array );

	/* �w�蕶����̃\�[�g���s�� */
	ptr = array;
	//for (  ; *ptr != '\0'; ++ptr){
		/* �ׂ荇�������������ɓ���ւ��� */
		//sort_array(array);
	//}
	
	/* �w�蕶����̃\�[�g���s��while */
	while(*ptr != '\0'){
	
		sort_array(array);
		++ptr;
	}
	
	/* exit���b�Z�[�W��\������ */
	printf( "\n ������\�[�g���I�����܂��� \n" );
	/*  �\�[�g�ϕ�����̌��ʕ\������ */
	printf( "\n sort data = \"%s\"",array);	
	
	//while(1);
	for(;1;);
}

/* �ׂ荇�������������ɓ���ւ���֐� */
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


	