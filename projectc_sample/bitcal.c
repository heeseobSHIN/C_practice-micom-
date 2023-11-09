
/*
ビット演算子を使って計算
*/

#include <stdio.h>

void main(void);

void main(void)
{
	char a = 0xF0;
	int i;
	char array[8];
	for(i = 0; i < 8; i++){
		if((a & 0x80) != 0){
			array[i] = 1;
		}else{
			array[i] = 0;
		}
	
		a = a << 1;
	}
	
	for(i = 0; i< 8; i++){
		printf("%d", array[i]);
	}
	

	while(1);
}