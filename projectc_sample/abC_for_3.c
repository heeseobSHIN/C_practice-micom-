//for•¶‚ğg‚Á‚Ä‚P‚©‚ç10A11‚©‚ç‚P‚O‚O‚Ü‚ÅA‚P‚O‚P‚©‚ç‚P‚O‚O‚O‚Ü‚Å‚ÌŒ‹‰Ê

#include <stdio.h>

void main(void);

void main(void)
{
	int sum, i, sum1, sum2;
	
	//i++ ‚Åsum‚É•Û‘¶
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