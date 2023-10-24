/***********************************************************************/
/*                                                                     */
/*  FILE        :loop_10.c�@�@                                         */
/*  DESCRIPTION :�t�B�{�i�b�`������쐬����                            */
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
unsigned long long int 	fibonacci(void);

/* main()�F���C������ */
void main(void)
{
	/* ���[�J���ϐ��̒�` */
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;
	unsigned long long int 	fiboValue;	//�t�B�{�i�b�`��
	unsigned long long int 	fiboValue_1;	//�ЂƂO�̃t�B�{�i�b�`��
	float		ratio;	//������

	/* �����J�n���b�Z�[�W���o�͂��� */
	printf("\n\nWelcom to"  " Fibonacci world");	//�v�Z�J�n���b�Z�[�W
	
	/* entry */
	j = 1;
	fiboValue_1 = 1;

	/* do */
	while(1){
		/* �v�Z�񐔂���͂��� */
		printf("\n       �v�Z�� = ");
		scanf("%u", &count);
		
		/* �v�Z�I���R�[�h���`�F�b�N���� */
		if(count == 999)
			break;

		/* �v�Z�񐔂܂Ō������� */
		for(i = 0 ; i < count; ++i, ++j){
			if ( (fiboValue = fibonacci()) == 0){
				printf( "�v�Z�̌��E�ł�\n" );
				break;	//�t�B�{�i�b�`�����I�[�o�[�t���[
			}
			else{
				/* ��������v�Z���� */
				ratio = (float)fiboValue / fiboValue_1;
			}
			/* �v�Z�񐔁A����idecimal)�A����(Hex)�A��������o�͂��� */
			printf("No.%3d %25llu (0x%16llx)  %f\n", j, fiboValue, fiboValue, ratio);
			
			fiboValue_1 = fiboValue;
		}
		if (fiboValue == 0)
			break;
	}
	
	/* exit */
	
	/* �����I�����b�Z�[�W���o�͂��� */
	printf("End of Fibonacci world\n");
}

/* fibonacci()�F�V���ȃt�B�{�i�b�`���𐶐����� */
unsigned long long int fibonacci(void)
{
	static unsigned long long int fn=0;	//�t�B�{�i�b�`���@Fn
	static unsigned long long int fn1=1;	//�t�B�{�i�b�`���@Fn+1
	unsigned long long int	fn2;		//�t�B�{�i�b�`���@Fn+2

	/* �V�����t�B�{�i�b�`�����v�Z���� */
	fn2 = fn + fn1;			//�t�B�{�i�b�`���̎Z�o�@Fn+2 = Fn + Fn+1
	
	/* 32bit�̃I�[�o�[�t���[���`�F�b�N���� */
	if (fn2 < fn1)
		return 0;		//�I�[�o�[�t���[�I�I
	else{
		fn = fn1;			//����̉��Z�̂��߂�Fn
		fn1 = fn2;			//����̉��Z�̂��߂�Fn+1
	
		return fn2;
	}
}



