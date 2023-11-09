#include <stdio.h>


void main(void);
int isWhitespace(char c);
void countWords(const char *text);

void main(void) {
    char input[100];
    printf("�e�L�X�g����͂��Ă������� (�ő�100����): ");
    
    /*
    	input: �ǂݎ��ꂽ�����񂪊i�[����镶���z��ւ̃|�C���^�B
    		���̏ꍇ�A���[�U�[�����͂����e�L�X�g�� input �z��Ɋi�[����܂��B
	sizeof(input): input �z��̃T�C�Y�i�������j���w�肵�܂��B���̂��Ƃ́A
    		input �z�񂪍ő�ł����̕������i�[�ł��邩�������Ă��܂��B
	stdin: fgets ���e�L�X�g��ǂݎ�邽�߂̃X�g���[���B���̏ꍇ�A�W�����͂���ǂݎ��܂��B
		���������āA���̍s�̓��[�U�[�ɃL�[�{�[�h����e�L�X�g����͂���@���񋟂��A���̃e�L�X�g�� input �z��Ɋi�[����܂��Bsizeof(input) �� input �z��̍ő�T�C�Y�ŁA���͕����񂪂��̃T�C�Y�𒴂��Ȃ��悤�ɂ��܂��B
    
    */
    fgets(input, sizeof(input), stdin);
    //scanf("%s", &input); //�Ȃ����߂Ȃ̂��H

    countWords(input);

    while(1);
}


int isWhitespace(char c) {
    return c == ' ' || c == '\n' || c == '\t';
}

void countWords(const char *text) {
    int count = 0;
    int insideWord = 0;

    
    //�n�܂�����P�A�����āA�����ƂOreturn�AWhitespace���������ꂽ��O�ɖ߂���count
    while (*text) {
        if (isWhitespace(*text)) {
            insideWord = 0;
        } else if (!insideWord) {
            count++;
            insideWord = 1;
        }
        text++;
    }

    printf("�o����: %d\n", count);
}