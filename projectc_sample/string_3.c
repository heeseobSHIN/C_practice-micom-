#include <stdio.h>

void main(void);
// enum group  {uppercaseCount = 0, lowercaseCount = 0, digitCount = 0, spaceCount = 0, otherCount = 0 };

//�����񂩂當���̏o�����𐔂���v���O�������������܂��B

void main(void) {
    char inputString[] = "Welcome to C-world !";

    
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;
    int spaceCount = 0;
    int otherCount = 0;
    
    
//    enum group score;    

//    score = uppercaseCount;    
    
    int i;

    for (i = 0; inputString[i] != '\0'; i++) {
        char ch = inputString[i];
        if (ch >= 'A' && ch <= 'Z') {
            uppercaseCount++;   //A�`Z
        } else if (ch >= 'a' && ch <= 'z') {
            lowercaseCount++;	//
        } else if (ch >= '0' && ch <= '9') {
            digitCount++;
        } else if (ch == ' ') {
            spaceCount++;
        } else {
            otherCount++;
        }
    }

    printf("�啶��: %d\n", uppercaseCount);
    printf("������: %d\n", lowercaseCount);
    printf("number: %d\n", digitCount);
    printf("blanck: %d\n", spaceCount);
    printf("���̑�: %d\n", otherCount);
    
    printf("%d\n", inputString[7]); //10�i
    
    printf("%c\n", inputString[7]); //ASCII

}
