//�����A�߂�l�̂���֐����������܂�

#include <stdio.h>


void main(void);
float GetBottomArea(float radius);
float volumeCone(float radius);
float volumeCylinder(float radius);

// ���C���֐�
void main(void) {
    int i;
    float r;
    
    // ���[�U�[�ɑI�������郁�b�Z�[�W��\��
    printf("1�F�~���̑̐�, 2�F�~���̑̐�, 3�F��ʐ�  : ");
    scanf("%d", &i);
    
    // ���a�����[�U�[�ɓ��͂����郁�b�Z�[�W��\��
    printf("\n���a��ݒ肵�Ă������� : ");
    scanf("%f", &r);

    if (i == 1) {
	    
        printf("\nh = 10\n");
	
        // �~���̑̐ς��v�Z���ĕ\��
        printf("%.2f\n", volumeCone(r));
	
    } else if (i == 2) {
	    
        printf("\nh = 10\n");
	
        // �~���̑̐ς��v�Z���ĕ\��
        printf("%.2f\n", volumeCylinder(r));
	
    } else if (i == 3) {
	    
        // ��ʐς��v�Z���ĕ\��
        printf("%.2f\n", GetBottomArea(r));
	
    } else {
	    
        // �G���[���b�Z�[�W
        printf("0.0\n");
	
    }

    // �������[�v
    while(1);
}

// ��ʐς��v�Z����֐�
float GetBottomArea(float radius) {
	
    float res;
    res = radius * radius * 3.14;
    return res;
    
}

// �~���̑̐ς��v�Z����֐�
float volumeCone(float radius) {
	
    float res;
    res = radius * radius * 3.14 * (1.0 / 3.0) * 10;
    return res;
    
}

// �~���̑̐ς��v�Z����֐�
float volumeCylinder(float radius) {
	
    float res;
    res = radius * radius * 3.14 * 10;
    return res;
    
}
