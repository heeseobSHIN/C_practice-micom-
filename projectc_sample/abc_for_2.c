//for文を使って１から１０００まで加算するプログラムを実装します。

#include <stdio.h>

void main(void);

void main(void)
{
	int sum, i;
	
	//i++ でsumに保存
	for(i = 1; i < 1001; i++){
		sum += i;
	}
	
	printf("%d", sum);
	
	
}