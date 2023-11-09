#include <stdio.h>

void main(void);
void intToBCD(int num);

void main(void) {
    int num;

    while (1) {
        printf("整数を入力してください (0を入力すると終了): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("終了します\n");
            break;
        }

        intToBCD(num);
    }

    while(1);
}

// BCD形式に変換する関数
void intToBCD(int num) {



    
    //この部分はBCDコードを理解できませんでした。
   

}

