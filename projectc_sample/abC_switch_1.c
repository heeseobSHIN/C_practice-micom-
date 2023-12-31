#include <stdio.h>

// 関数のプロトタイプ
float calculateVolumeOrArea(char shape, int r, int l
);
void main(void);

void main(void) {
    char select;
    int r;
    int h;
    float result;

    printf("1: 円錐の体積\n");
    printf("2: 円柱の体積\n");
    printf("3: 底面積\n");
    printf("9: 半径rの球体の体積\n");
    printf("その他: 0.0\n");
    printf("選択: ");
    scanf(" %c", &select);

    switch (select) {
        case '1':
            printf("半径rを入力してください: ");
            scanf("%d", &r);
            printf("高さhを入力してください: ");
            scanf("%d", &h);
            result = calculateVolumeOrArea(select, r, h);
            break;

        case '2':
            printf("半径rを入力してください: ");
            scanf("%d", &r);
            printf("高さhを入力してください: ");
            scanf("%d", &h);
            result = calculateVolumeOrArea(select, r, h);
            break;

        case '3':
            printf("半径rを入力してください: ");
            scanf("%d", &r);
            result = calculateVolumeOrArea(select, r, 0);
            break;

        case '9':
            printf("半径rを入力してください: ");
            scanf("%d", &r);
            result = calculateVolumeOrArea(select, r, 0);
            break;

        default:
            result = 0.0;
            break;
    }

    if (result == 0.0) {
        printf("エラー: 0.0\n");
    } else {
        printf("結果: %f\n", result);
    }

    return 0;
}

// 体積または底面積を計算する関数
float calculateVolumeOrArea(char shape, int r, int l
) {
    switch (shape) {
        case '1':
            return 1.0 / 3.0 * 3.14 * r * r * l
            ;

        case '2':
            return 3.14 * r * r * l
            ;

        case '3':
            return 3.14 * r * r;

        case '9':
            return (4.0 / 3.0) * 3.14 * r * r * r;

        default:
            return 0.0;
    }
}
