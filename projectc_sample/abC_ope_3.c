#include <stdio.h>

void main(void);




//電圧から温度に変換するプログラムを実装します。
	void main(void){
	
	float tem , VO  ;
	//scanf("%f", VO);
	VO = 10;
		
	tem = (VO - 424/1000)/(6.25/1000);
		
	printf("%f", tem);
	
	
	
	
	
	
	}
	
	
	
