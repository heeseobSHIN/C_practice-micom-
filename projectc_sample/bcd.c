/***********************************************************************/
/*                                                                     */
/*  FILE        :bcd.c                                                 */
/*  DESCRIPTION :BCD�ϊ�                                               */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/

/* include file */
#include <stdio.h>

/* �֐��v���g�^�C�v�錾 */
void		main(void);
unsigned int	bcd(unsigned int);

void main(void)
{
	unsigned int	intData;
	unsigned int	bcdData;

	while(1){
		/* BCD�ϊ������鐔�l����͂��� */
		printf( "input data = ?" );
		scanf( "%u", &intData);
		
		/* BCD�ϊ� */
		bcdData = bcd(intData);
		
		/* BCD�ϊ����ʂ̏o�� */
		printf( "BCD = %c ",((bcdData >> 28) & 0xf) + '0');	
		printf( "%c ",((bcdData >> 24) & 0xf) + '0');
		printf( "%c ",((bcdData >> 20) & 0xf) + '0');
		printf( "%c ",((bcdData >> 16) & 0xf) + '0');
		printf( "%c ",((bcdData >> 12) & 0xf) + '0');
		printf( "%c ",((bcdData >> 8)  & 0xf) + '0');
		printf( "%c ",((bcdData >> 4)  & 0xf) + '0');
		printf( "%c\n ",(bcdData & 0xf) + '0');
	}
}

/* bcd():BCD�ϊ�	�ő�ϊ�����=8 */
unsigned int bcd(unsigned int in)
{
	/* �ϐ��錾 */
	unsigned int 	out;
	unsigned int 	amari;
	int		i;
	
	/* 
	*  BCD�ϊ��p���e�[�u��
	*                       [����]   [���V�t�g��]
	*                        |       |
	*/
	int ary_digit[][2]= {
				{10000000,4*7},
				{1000000,4*6},
				{100000,4*5},
				{10000,4*4},
				{1000,4*3},
				{100,4*2},
				{10,4*1}
	};

	/* entry */
	amari = in;
	out = 0;
		
	/* �����Ƃ�BCD�l���Z�o���� */
	for ( i = 0; i < 7; ++i){
		out = out | (( amari / ary_digit[i][0] ) << ary_digit[i][1] );
		amari = amari % ary_digit[i][0];
	}
	out += amari;		//1�ʂ�BCD�l���Z�b�g����

	/* exit */
	return out;		//�߂�l:BCD�l	
}