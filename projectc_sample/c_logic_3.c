//デバッグコンソールから入力した16進数を左にシフトします。

#include <stdio.h>

void main(void);

void main(void)
{
	int a, b;
	int en;
	char res;
	while(1){
		printf("16bit input : ");	
		scanf("%x", &a);
		
		if(a == 0x00){
			break;
		}else{
		
			printf("bit演算子を選んでください(１：AND,２：OR,３：XOR,４：NOT) : ");
			scanf("%d", &en);
			
			
		
		
			if(en == 1){
				
				printf("演算Pを入力　: ");
				scanf("%x", &b);
				res = a & b;
				
			}else if(en == 2){
				
				printf("演算Pを入力　: ");
				scanf("%x", &b);
				res = a | b;
				
			}else if(en == 3){
				
				printf("演算Pを入力　: ");
				scanf("%x", &b);
				res = a ^ b;
				
			}else if(en == 4){
				
				res = ~a;
			}
			
			
			printf("result : 0x%x\n", res);
			
		
		}
	}
}