//素数（prime number)を洗い出すプログラムを実装します。

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	
	int i;
    if (n <= 1) {
        return false;
    }

    if (n <= 3) {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    
    //素数は2,3,5,7,11,13,17,19の順番で
    for ( i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}



void main(void) {
    
    int num = 2;

    int count;
    printf("素数調査開始\n");
    while (1) {
        printf("調査対象個数入力 (999で　終了): ");
        scanf("%d", &count);

        if (count == 999) {
            printf("調査終了.\n");
            break;
        }

        printf("調査対象までの素数個数:\n");
        
        while (count > 0) {
            if (isPrime(num)) {
                printf("%d ", num);
                count--;
            }
            num++;
        }

        printf("\n完了しました。.\n");
    }

   
}



