#include <stdio.h>

// �֐��̃v���g�^�C�v
float calculateVolumeOrArea(char shape, int r, int l
);
void main(void);

void main(void) {
    char select;
    int r;
    int h;
    float result;

    printf("1: �~���̑̐�\n");
    printf("2: �~���̑̐�\n");
    printf("3: ��ʐ�\n");
    printf("9: ���ar�̋��̂̑̐�\n");
    printf("���̑�: 0.0\n");
    printf("�I��: ");
    scanf(" %c", &select);

    switch (select) {
        case '1':
            printf("���ar����͂��Ă�������: ");
            scanf("%d", &r);
            printf("����h����͂��Ă�������: ");
            scanf("%d", &h);
            result = calculateVolumeOrArea(select, r, h);
            break;

        case '2':
            printf("���ar����͂��Ă�������: ");
            scanf("%d", &r);
            printf("����h����͂��Ă�������: ");
            scanf("%d", &h);
            result = calculateVolumeOrArea(select, r, h);
            break;

        case '3':
            printf("���ar����͂��Ă�������: ");
            scanf("%d", &r);
            result = calculateVolumeOrArea(select, r, 0);
            break;

        case '9':
            printf("���ar����͂��Ă�������: ");
            scanf("%d", &r);
            result = calculateVolumeOrArea(select, r, 0);
            break;

        default:
            result = 0.0;
            break;
    }

    if (result == 0.0) {
        printf("�G���[: 0.0\n");
    } else {
        printf("����: %f\n", result);
    }

    return 0;
}

// �̐ς܂��͒�ʐς��v�Z����֐�
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
