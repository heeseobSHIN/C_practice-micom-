//����q�Ȃ���if���������v���O�������������܂��B

#include <stdio.h>



void main(void) {
    int select;
    int r;
    int h;
    float res;
    
    printf("�~�� : 0, �~�� : 1, ���� : 2, ���̑� : error\n");
    scanf("%d", &select);
    
    
    if(select == 0){
	printf("r����� : ");
    	scanf("%d", &r);
    	printf("������� : ");
    	scanf("%d", &h);
    	res = (1.0/3.0)*3.14*r*r*h;
    	printf("%f", res);
    }
    
    else if(select == 1){
	 printf("r����� : ");
   	 scanf("%d", &r);
    	 printf("������� : ");
   	 scanf("%d", &h);
   	 res = (3.14)*r*r*h;
   	 printf("%f", res);
    }
    
    else if(select == 2){
	 printf("r����� : ");
   	 scanf("%d", &r);
    	 printf("������� : ");
   	 scanf("%d", &h);
   	 res = (4.0/3.0)*(3.14)*r*r*r;
   	 printf("%f", res);
    }
    
    else{
    printf("'0.0'");
    }
    
    while(1);
    
    
}



