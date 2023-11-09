//引数、戻り値のある関数を実装します

#include <stdio.h>


void main(void);
float GetBottomArea(float radius);
float volumeCone(float radius);
float volumeCylinder(float radius);

// メイン関数
void main(void) {
    int i;
    float r;
    
    // ユーザーに選択させるメッセージを表示
    printf("1：円錐の体積, 2：円柱の体積, 3：底面積  : ");
    scanf("%d", &i);
    
    // 半径をユーザーに入力させるメッセージを表示
    printf("\n半径を設定してください : ");
    scanf("%f", &r);

    if (i == 1) {
	    
        printf("\nh = 10\n");
	
        // 円錐の体積を計算して表示
        printf("%.2f\n", volumeCone(r));
	
    } else if (i == 2) {
	    
        printf("\nh = 10\n");
	
        // 円柱の体積を計算して表示
        printf("%.2f\n", volumeCylinder(r));
	
    } else if (i == 3) {
	    
        // 底面積を計算して表示
        printf("%.2f\n", GetBottomArea(r));
	
    } else {
	    
        // エラーメッセージ
        printf("0.0\n");
	
    }

    // 無限ループ
    while(1);
}

// 底面積を計算する関数
float GetBottomArea(float radius) {
	
    float res;
    res = radius * radius * 3.14;
    return res;
    
}

// 円錐の体積を計算する関数
float volumeCone(float radius) {
	
    float res;
    res = radius * radius * 3.14 * (1.0 / 3.0) * 10;
    return res;
    
}

// 円柱の体積を計算する関数
float volumeCylinder(float radius) {
	
    float res;
    res = radius * radius * 3.14 * 10;
    return res;
    
}
