#include <stdio.h>

void main(void);


/* 1から10まで加える */
void main(void)
{
	char array[] = "abc";
	char *ptr;
	
	ptr = array;
	
	printf("1:%s\n", array);
	printf("2:%x\n", array);
	printf("3:%x\n", ptr);
	printf("4:",*ptr);
	printf(ptr);
	
	while(1);
}