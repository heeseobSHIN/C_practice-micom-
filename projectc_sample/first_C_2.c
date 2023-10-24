
/***********************************************************************/
/*                                                                     */
/*  FILE        :first_C_2.c                                           */
/*  DESCRIPTION :C�������@��2�̓T���v���v���O����                    */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/

#include <stdio.h>

/* �֐��v���g�^�C�v�錾 */
int	count_line(char *);
void 	count_func(char *);
void 	main(void);

/* �֐�main() */
void main(void)
{
	#include "textdata.h"
		
	int	line;

	/* entry ���b�Z�[�W���o�� */
	printf("\n Quality of sorce code \n");

	/* ���s���𒲂ׂ� */
	line = count_line(text);	//���s�����J�E���g����
	printf("\n SLOC(Souce Line Of Code) = %d\n",line);	// total of line�����o�͂���

	/* �֐��̍s���𒲂ׂ� */	
	count_func(text);

	while(1);
}

/* text�̍s�����J�E���g���� */
int 	count_line(char *ptr)
{
	int	count;
	for ( count = 0; *ptr != '\0'; ++ptr){
		if( *ptr == '\n')
			++count;
	}
	return count;	
}


/* �֐����̍s�����J�E���g���� */
void 	count_func(char *ptr)
{
	int	count;
	int	stack;
	char	*ptr1;
	
	for ( count = 0; *ptr != '\0'; ++ptr){
		if((*(ptr-1) == '\n') && (*ptr == '{') && ((*(ptr+1)) == '\n')){	//�֐��u���b�N�̊J�n�ł����H
			ptr1 = ptr + 2;
			for (count = 0, stack = 1; stack != 0; ++ptr1){
				switch (*ptr1){
				case '{':
					++stack;	//���g���ʌ��o
					break;
				case '}':
					--stack;	//�E�g���ʌ��o
					break;
				case '\n':
					++count;	//
					break;
				default:
					break;
				}
			}
			printf("\n FLOC(Function Line Of Code) = %d \n", count);
		}
	}
}

