#include <stdio.h>

void main(void);

// 底面積を計算する関数
float GetBottomArea(float);

void main(void)
{
    	int i;
    	float r;
    	printf("1：円錐の体積, 2：円柱の体積, 3：底面積  :   ");
    	scanf("%d", &i);
    	printf("\n半径を設定してください: ");
    	scanf("%f", &r);

    	if (i == 1)
    	{
        	printf("\nh = 10");
        	printf("\n%.2f\n", GetBottomArea(r) * (1.0 / 3.0) * 10);
    	}
   	 else if (i == 2)
    	{
     	   printf("\nh = 10");
    	    printf("\n%.2f\n", GetBottomArea(r) * 10);
   	 }
  	  else if (i == 3)
  	  {
  	      printf("\n%.2f\n", GetBottomArea(r));
  	  }
   	 else
   	 {
   	     printf("\n0.0\n");
   	 }
}

// 底面積を計算する関数
float GetBottomArea(float radius)
{
    float res;

    res = radius * radius * 3.14;

    return res;
}
