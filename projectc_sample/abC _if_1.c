#include <stdio.h>

void main(void) {
	
    int select;  // 選択肢を格納する変数
    int r;       // 円の半径を格納する変数
    int h;       // 高さを格納する変数
    float res;   // 結果を格納する変数
    
    printf("円錐 : 0, 円柱 : 1, その他 : error\n");
    scanf("%d", &select);
    
    if (select == 0) {
	    
        // 円錐の計算
        printf("rを入力 : ");
        scanf("%d", &r);
	
        printf("ｈを入力 : ");
        scanf("%d", &h);
	
        res = (1.0 / 3.0) * 3.14 * r * r * h;
        printf("%f", res);
	
    } else if (select == 1) {
	    
        // 円柱の計算
        printf("rを入力 : ");
        scanf("%d", &r);
	
        printf("ｈを入力 : ");
        scanf("%d", &h);
	
        res = 3.14 * r * r * h;
        printf("%f", res);
	
    } else {
	    
        // エラーメッセージ
        printf("'0.0'");
    }
    
    while (1);
}
