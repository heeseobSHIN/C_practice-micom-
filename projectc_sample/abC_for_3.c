//for文を使って１から10、11から１００まで、１０１から１０００までの結果

#include <stdio.h>

void main(void);

void main(void)
{
	int sum, i, sum1, sum2;
	
	//i++ でsumに保存
	for(i = 1; i < 1001; i++){
		sum += i;
		
		if(i == 10){
			printf("%d\n", sum);
			sum2 = sum;
		}else if(i == 100){
			printf("%d\n", sum); 
			sum1 = sum;
		}else if( i == 1000){
			printf("%d\n", sum - sum1 + sum2);
		}
	}
	
	
	while(1);
	
}