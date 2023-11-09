#include <stdio.h>

void main(void);

void main(void) {
    int startNum, lastNum;
    int i, j;
    int count;

    printf("最初の数を入力してください：");
    scanf("%d", &startNum);
    printf("最後の数を入力してください：");
    scanf("%d", &lastNum);

    // 範囲内の数に対して素数を探す
    for (i = startNum; i <= lastNum; i++) {
        count = 0; // 素数の約数の数をカウント

        // 2からi-1までの数でiを割ります
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                count++;
                break; // 素数でないことが分かったらループを抜けます
            }
        }

        // 約数の数が0なら素数
        if (count == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    while(1);
}
