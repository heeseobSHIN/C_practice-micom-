
/***********************************************************************/
/*                                                                     */
/*  FILE        :sample_01.c                                           */
/*  DESCRIPTION :�ȒP�Ȍv�Z�@                                          */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:                                                              */
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

	short	arg1,arg2;	//�v�Z�Ώ�	0�� arg1 + arg2 
				//		1�� arg1 - arg2 
				//		2�� arg1 * arg2
				//		3�� arg1 / arg2 
	int	result;		//�v�Z����

	/* �v�Z���@���w�肷�� */
	calc = 3;
	arg1 = 0xffff;
	arg2 = 0x7fff;
	
	/* �v�Z */
	if (calc == 0)
		result = arg1 + arg2;		//���Z����
	else if (calc == 1)
		result = arg1 - arg2;		//���Z����
	else if (calc == 2)
		result = arg1 * arg2;		//��Z����
	else
		result = arg1 / arg2;		//���Z����
	
	/* �v�Z���ʂ̏o�� */
	printf("\n arg1=%d(0x%x)  arg2=%d(0x%x)  result=%d(0x%x)",arg1,arg1,arg2,arg2,result,result);
	
	while(1);

}
