#include <stdio.h>

void main(void);

// ��ʐς��v�Z����֐�
float GetBottomArea(float);

void main(void)
{
    	int i;
    	float r;
    	printf("1�F�~���̑̐�, 2�F�~���̑̐�, 3�F��ʐ�  :   ");
    	scanf("%d", &i);
    	printf("\n���a��ݒ肵�Ă�������: ");
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

// ��ʐς��v�Z����֐�
float GetBottomArea(float radius)
{
    float res;

    res = radius * radius * 3.14;

    return res;
}
