#include <stdio.h>

void main(void) {
	
    int select;  // �I�������i�[����ϐ�
    int r;       // �~�̔��a���i�[����ϐ�
    int h;       // �������i�[����ϐ�
    float res;   // ���ʂ��i�[����ϐ�
    
    printf("�~�� : 0, �~�� : 1, ���̑� : error\n");
    scanf("%d", &select);
    
    if (select == 0) {
	    
        // �~���̌v�Z
        printf("r����� : ");
        scanf("%d", &r);
	
        printf("������� : ");
        scanf("%d", &h);
	
        res = (1.0 / 3.0) * 3.14 * r * r * h;
        printf("%f", res);
	
    } else if (select == 1) {
	    
        // �~���̌v�Z
        printf("r����� : ");
        scanf("%d", &r);
	
        printf("������� : ");
        scanf("%d", &h);
	
        res = 3.14 * r * r * h;
        printf("%f", res);
	
    } else {
	    
        // �G���[���b�Z�[�W
        printf("'0.0'");
    }
    
    while (1);
}
