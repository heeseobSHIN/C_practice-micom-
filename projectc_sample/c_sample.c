
/***********************************************************************/
/*                                                                     */
/*  FILE        c_sample.c                                             */
/*  DESCRIPTION :sample_01 �����̏o���񐔂𒲍�����v���O����          */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:�p�����ƃX�y�[�X�ȊO����͂����ꍇ�́A�G���[�Ƃ��ď����𒆎~  */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#include <stdio.h>

void main(void);


void main(void)
{
	unsigned char	msg[80];		//���͂������b�Z�[�W�̕ۑ�
	unsigned char	cnt_012 = 0;		//��������('0'-'9')�̏o����
	unsigned char	cnt_ABC = 0;		//�p���啶��('A'-'Z')�̏o����
	unsigned char	cnt_abc = 0;		//�p��������('a'-'z')�̏o����
	unsigned char	cnt_space = 0;		//�X�y�[�X�����̏o����
	
	int	i;

	
	/* �^�C�g�����b�Z�[�W��\������ */
	
	printf("\n--- check occurrences of character ! ---");
	
	
	/* �����ΏۂƂȂ郁�b�Z�[�W�̓��͂𑣂� */
	
	printf("\n\n please input message = ");
	scanf("%[^\n]",msg);
	
	/* �����ΏۂƂȂ郁�b�Z�[�W�̏o���񐔂𒲍����� */
	for (i = 0; msg[i] != '\0'; ++i){
		if (msg[i] < '0' && msg[i] > 'z' || msg[i] > '9' && msg[i] < 'A' || msg[i] > 'Z' && msg[i] < 'a'){
			printf("\n  **** input error ! ***");	//���̓G���[
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
	
	/* ���ʂ��o�͂��� */
	
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


