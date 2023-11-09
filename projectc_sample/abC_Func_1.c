#include <stdio.h>

void main(void);

// ’ê–ÊÏ‚ğŒvZ‚·‚éŠÖ”
float GetBottomArea(float);

void main(void)
{
    	int i;
    	float r;
    	printf("1F‰~‚Ì‘ÌÏ, 2F‰~’Œ‚Ì‘ÌÏ, 3F’ê–ÊÏ  :   ");
    	scanf("%d", &i);
    	printf("\n”¼Œa‚ğİ’è‚µ‚Ä‚­‚¾‚³‚¢: ");
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

// ’ê–ÊÏ‚ğŒvZ‚·‚éŠÖ”
float GetBottomArea(float radius)
{
    float res;

    res = radius * radius * 3.14;

    return res;
}
