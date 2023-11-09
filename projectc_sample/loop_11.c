//�f���iprime number)��􂢏o���v���O�������������܂��B

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
    
    //�f����2,3,5,7,11,13,17,19�̏��Ԃ�
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
    printf("�f�������J�n\n");
    while (1) {
        printf("�����Ώی����� (999�Ł@�I��): ");
        scanf("%d", &count);

        if (count == 999) {
            printf("�����I��.\n");
            break;
        }

        printf("�����Ώۂ܂ł̑f����:\n");
        
        while (count > 0) {
            if (isPrime(num)) {
                printf("%d ", num);
                count--;
            }
            num++;
        }

        printf("\n�������܂����B.\n");
    }

   
}



