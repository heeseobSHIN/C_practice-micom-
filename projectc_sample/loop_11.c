/***********************************************************************/
/*                                                                     */
/*  FILE        :loop_11.c�@�@                                         */
/*  DESCRIPTION :�f�����ǂ����̃`�F�b�N                                */
/*  CPU TYPE    :RX62N                                                 */
/*                                                                     */
/*  NOTE:                                                            �@*/
/*                                                                     */
/***********************************************************************/

/* include file */
#include <stdio.h>
#include <machine.h>

/* �u�������}�N����` */

/* �֐��v���g�^�C�v�錾 */
void	 	main(void);

/* main()�F���C������ */
void main(void)
{
	int	i;
	int	j;
	int	primeNo;
	int	counter;
	
	/* �J�n���b�Z�[�W���o�͂��� */
	printf("prime number�̒���\n");
	
	primeNo = 0;
	j = 2;
	
	while(1){
		/* �����Ώی����o�͂��� */
		printf("�����Ώی� =");
		scanf("%d",&counter);
		
		if (counter == 999)	//�I���R�[�h���`�F�b�N����
			break;

		/* �����Ώی������J��Ԃ� */
		for ( i = 1; i < counter; ++i, ++primeNo){
			/* �ΏۂƂȂ鐔�l�͑f���� */
			for ( j = 2 ; j < primeNo; ++j){
				if ( primeNo % j )
					;
				else
					break;	//�f���ł͂Ȃ�
			}
			if ( j == primeNo )
				printf ("%8d\n", primeNo);
		}
	}
	
	/* �I�����b�Z�[�W���o�͂��� */
	printf("prime number�̒����͏I��\n");	
}
	
