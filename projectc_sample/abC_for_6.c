//for文を使ったプログラムを実装します。

#include <stdio.h>

void main(void);

void main(void)
{
	
	int i;
	int sum = 0;
	int count = 0;
	
	
		
	for(i = 1; i < 10000 ; i++){
			
		if(i%2 == 1){
			if(sum < 10000){
			sum += i;
			count++;
			}
			
		}
		
	}
	
	
		printf("%d ,%d",sum, count);
		
		
	
	
	
	while(1);
	
	
	
	
}




