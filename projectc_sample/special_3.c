#include <stdio.h>

void main(void);
void intToBCD(int num);

void main(void) {
    int num;

    while (1) {
        printf("��������͂��Ă������� (0����͂���ƏI��): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("�I�����܂�\n");
            break;
        }

        intToBCD(num);
    }

    while(1);
}

// BCD�`���ɕϊ�����֐�
void intToBCD(int num) {



    
    //���̕�����BCD�R�[�h�𗝉��ł��܂���ł����B
   

}

