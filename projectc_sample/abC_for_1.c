//for�����g�����V���v���ȃv���O�������������܂��B

#include <stdio.h>

//Prototype �錾
void main(void);

void main(void)
{
	//�ϐ��錾�A��`
	int a = 1000;
	int b = 3;
	int i , sum;
	
	//5�񊄂��čŌ�ɂ͏o��
	for(i = 0; i < 5; i++){
		
		
		a = a / b;
		if(i == 4){
			printf("%d", a);
		}
	}
	
	while(1);
}