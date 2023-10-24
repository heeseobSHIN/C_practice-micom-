#include <stdio.h>

void main(void);


//文字列から文字の出現数を数えるプログラムを実装します。

void main(void) {
    char inputString[] = "Welcome to C-world !";

    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;
    int spaceCount = 0;
    int otherCount = 0;
    int i;

    for (i = 0; inputString[i] != '\0'; i++) {
        char ch = inputString[i];
        if (ch >= 'A' && ch <= 'Z') {
            uppercaseCount++;
        } else if (ch >= 'a' && ch <= 'z') {
            lowercaseCount++;
        } else if (ch >= '0' && ch <= '9') {
            digitCount++;
        } else if (ch == ' ') {
            spaceCount++;
        } else {
            otherCount++;
        }
    }

    printf("大文字: %d\n", uppercaseCount);
    printf("小文字: %d\n", lowercaseCount);
    printf("number: %d\n", digitCount);
    printf("blanck: %d\n", spaceCount);
    printf("その他: %d\n", otherCount);

    return 0;
}
