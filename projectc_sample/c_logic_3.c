//�f�o�b�O�R���\�[��������͂���16�i�������ɃV�t�g���܂��B

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
		
			printf("bit���Z�q��I��ł�������(�P�FAND,�Q�FOR,�R�FXOR,�S�FNOT) : ");
			scanf("%d", &en);
			
			
		
		
			if(en == 1){
				
				printf("���ZP����́@: ");
				scanf("%x", &b);
				res = a & b;
				
			}else if(en == 2){
				
				printf("���ZP����́@: ");
				scanf("%x", &b);
				res = a | b;
				
			}else if(en == 3){
				
				printf("���ZP����́@: ");
				scanf("%x", &b);
				res = a ^ b;
				
			}else if(en == 4){
				
				res = ~a;
			}
			
			
			printf("result : 0x%x\n", res);
			
		
		}
	}
}