
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_04.c                                           */
/*  DESCRIPTION :�ȒP�Ȍv�Z�@ ���ǂS                                   */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:�A�������A�W�����͑��u����f�[�^���Z�b�g�A���̓G���[����      */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#include <stdio.h>

void main(void);

/* ���C������	 */
void main(void)
{
	unsigned char	calc;	//�v�Z�w��	0 ���Z
				//		1 ���Z
				//		2 ��Z
				//		3 ���Z

	float	arg1,arg2;	//�v�Z�Ώ�	0�� arg1 + arg2 
				//		1�� arg1 - arg2 
				//		2�� arg1 * arg2
				//		3�� arg1 / arg2 

	float	result;		//�v�Z����

	while(1){
		/* �v�Z���@����͂��� */
		printf("\n�v�Z�ԍ�=");
		scanf("%d",&calc);
		
		if(calc == 9)				//�I���`�F�b�N
			break;
		else if(calc > 3)		
			printf("\n\n Invalid!");	//�G���[
		else{
			printf("\n  arg1=");
			scanf("%f",&arg1);		// �퉉�Z�l arg1����͂���	
			
			printf("\n  arg2=");
			scanf("%f",&arg2);		// ���Z�l arg2����͂���			
			
			/* �v�Z */
			switch (calc){
			case 0:
				result = arg1 + arg2;	//���Z����
				break;
			case 1:
				result = arg1 - arg2;	//���Z����
				break;
			case 2:
				result = arg1 * arg2;	//��Z����
				break;
			case 3:
				result = arg1 / arg2;	//���Z����
				break;
			default:
				break;
			}
			
			/* �v�Z���ʂ̏o�� */
			printf("\n arg1=%f(0x%x)  arg2=%f(0x%x)  result=%f(0x%x)",arg1,arg1,arg2,arg2,result,result);
		}
	}
	
	/* �����I�����b�Z�[�W */
	printf("\n\n--- end ---");
	
	while(1)
		;
}