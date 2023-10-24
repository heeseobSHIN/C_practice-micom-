/***********************************************************************/
/*                                                                     */
/*  FILE        :bcd.c                                                 */
/*  DESCRIPTION :BCD変換                                               */
/*                                                                     */
/*  CPU TYPE    :RX621                                                 */
/*                                                                     */
/*  NOTE:                                                              */
/*                                                                     */
/***********************************************************************/

/* include file */
#include <stdio.h>

/* 関数プロトタイプ宣言 */
void		main(void);
unsigned int	bcd(unsigned int);

void main(void)
{
	unsigned int	intData;
	unsigned int	bcdData;

	while(1){
		/* BCD変換をする数値を入力する */
		printf( "input data = ?" );
		scanf( "%u", &intData);
		
		/* BCD変換 */
		bcdData = bcd(intData);
		
		/* BCD変換結果の出力 */
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

/* bcd():BCD変換	最大変換桁数=8 */
unsigned int bcd(unsigned int in)
{
	/* 変数宣言 */
	unsigned int 	out;
	unsigned int 	amari;
	int		i;
	
	/* 
	*  BCD変換用情報テーブル
	*                       [除数]   [左シフト数]
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
		
	/* 桁ごとにBCD値を算出する */
	for ( i = 0; i < 7; ++i){
		out = out | (( amari / ary_digit[i][0] ) << ary_digit[i][1] );
		amari = amari % ary_digit[i][0];
	}
	out += amari;		//1位のBCD値をセットする

	/* exit */
	return out;		//戻り値:BCD値	
}