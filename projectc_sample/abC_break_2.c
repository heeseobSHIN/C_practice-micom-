#include <stdio.h>

void main(void);

void main(void) {
    int startNum, lastNum;
    int i, j;
    int count;

    printf("�ŏ��̐�����͂��Ă��������F");
    scanf("%d", &startNum);
    printf("�Ō�̐�����͂��Ă��������F");
    scanf("%d", &lastNum);

    // �͈͓��̐��ɑ΂��đf����T��
    for (i = startNum; i <= lastNum; i++) {
        count = 0; // �f���̖񐔂̐����J�E���g

        // 2����i-1�܂ł̐���i������܂�
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                count++;
                break; // �f���łȂ����Ƃ����������烋�[�v�𔲂��܂�
            }
        }

        // �񐔂̐���0�Ȃ�f��
        if (count == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    while(1);
}
