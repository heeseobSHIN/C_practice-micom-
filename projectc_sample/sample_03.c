
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_03.c                                           */
/*  DESCRIPTION :�ȒP�Ȍv�Z�@ ���ǂR                                   */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:�I��(switch)                                  */
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

	/* �v�Z���@���w�肷�� */
	calc = 4;
	arg1 = 100;
	arg2 = -3.0;
	
	/* �v�Z */
	switch (calc){
	case 0:
		result = arg1 + arg2;		//���Z����
		break;
	case 1:
		result = arg1 - arg2;		//���Z����
		break;
	case 2:
		result = arg1 * arg2;		//��Z����
		break;
	case 3:
		result = arg1 / arg2;		//���Z����
		break;
	default:
		break;
	}
	
	/* �v�Z���ʂ̏o�� */
	printf("\n arg1=%f(0x%x)  arg2=%f(0x%x)  result=%f(0x%x)",arg1,arg1,arg2,arg2,result,result);
	
	while(1);
}