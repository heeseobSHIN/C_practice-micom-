#include <stdio.h>

//prototype 
void main(void);
int isOperator(char);
int isWhitespace(char);

//����������s
void main(void) {
    char input[80] = "Y = data * 256 + ++a; //comment"; //++a
    char *token = input;
    char *current = input;
    
    while (*current != '\0') {
	    
	    
	//���Z�W����邱��

    
        if (isWhitespace(*current)) {
		
            *current = '\0';  // �󔒕����� NULL �����Œu��������
	    
            if (token != input) {
		    
                // �g�[�N������łȂ��ꍇ�A�g�[�N�������
                printf("%s\n", token);
                token = input;
		
            }
	    
	    
        } else if (isOperator(*current)) {
		
            if (token != input) {
                // �g�[�N������łȂ��ꍇ�A�g�[�N�������
                printf("%s\n", token);
                token = input;
		
            }
	    
            // ���Z�q�����
            printf("%c\n", *current);
	    
        } else {
		
            if (token == input) {
		    
                token = current;  // �g�[�N���̊J�n�ʒu��ݒ�
		
            }
	    
        }
	
        current++;
	
    }

    // �c��̃g�[�N�������
    if (token != input) {
	    
        printf("%s\n", token);
	
    }

   while(1);
}

/* ���Z�q�ł��邩�ǂ����𔻒肷��֐�*/
int isOperator(char c) {
	
	
    
    char operators[] = "+-*/=";
    int i;
    
    
    for (i = 0; operators[i]; i++) {
	    
        if (c == operators[i]) {
		
            return 1;
	    
        }
	
    }
    
    return 0;
}

// �󔒕����ł��邩�ǂ����𔻒肷��֐�
int isWhitespace(char c) {
	
    
    return (c == ' ' ||  c == '\n');
    
}