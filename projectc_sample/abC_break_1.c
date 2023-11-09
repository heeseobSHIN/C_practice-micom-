//‘f”‚ğ’T‚·ƒvƒƒOƒ‰ƒ€‚ğÀ‘•‚µ‚Ü‚·

#include <stdio.h>

void main(void);

void main(void)
{
	
	int inputNum;
	int i = 2;
	int count = 0;
	
	printf("input number : ");
	scanf("%d", &inputNum);

	
	while(1){
		
		
		//switch()
		if(i != inputNum){
		
			if((inputNum % i) == 0 ){
	
				count++;
				i++;
	
			}
			else if((inputNum % i) != 0){
		
				i++;
	
			}
		
		}else if(i == inputNum){
		
		break;
		
		}
	
	
	}
	
	if(count == 0){
		switch(inputNum)
		{
		case 2:
			//printf("N is prime number !");
			break;
		
		case 3:
			//printf("N is prime number !");
			break;
			
		case 5:
			//printf("N is prime number !");
			break;
		case 7: 
			//printf("N is prime number !");
			break;
		}
		printf("N is prime number !");
	}else{
		printf("N is not prime number !");
	}
	
	
	while(1);
	
	
	
}