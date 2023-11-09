//入れ子なしのif文を扱うプログラムを実装します。

#include <stdio.h>



void main(void) {
    int select;
    int r;
    int h;
    float res;
    
    printf("円錐 : 0, 円柱 : 1, 球体 : 2, その他 : error\n");
    scanf("%d", &select);
    
    
    if(select == 0){
	printf("rを入力 : ");
    	scanf("%d", &r);
    	printf("ｈを入力 : ");
    	scanf("%d", &h);
    	res = (1.0/3.0)*3.14*r*r*h;
    	printf("%f", res);
    }
    
    else if(select == 1){
	 printf("rを入力 : ");
   	 scanf("%d", &r);
    	 printf("ｈを入力 : ");
   	 scanf("%d", &h);
   	 res = (3.14)*r*r*h;
   	 printf("%f", res);
    }
    
    else if(select == 2){
	 printf("rを入力 : ");
   	 scanf("%d", &r);
    	 printf("ｈを入力 : ");
   	 scanf("%d", &h);
   	 res = (4.0/3.0)*(3.14)*r*r*r;
   	 printf("%f", res);
    }
    
    else{
    printf("'0.0'");
    }
    
    while(1);
    
    
}



