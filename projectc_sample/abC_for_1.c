//for文を使ったシンプルなプログラムを実装します。

#include <stdio.h>

//Prototype 宣言
void main(void);

void main(void)
{
	//変数宣言、定義
	int a = 1000;
	int b = 3;
	int i , sum;
	
	//5回割して最後には出力
	for(i = 0; i < 5; i++){
		
		
		a = a / b;
		if(i == 4){
			printf("%d", a);
		}
	}
	
	while(1);
}