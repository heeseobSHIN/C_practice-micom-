#include <stdio.h>


void main(void);
int isWhitespace(char c);
void countWords(const char *text);

void main(void) {
    char input[100];
    printf("テキストを入力してください (最大100文字): ");
    
    /*
    	input: 読み取られた文字列が格納される文字配列へのポインタ。
    		この場合、ユーザーが入力したテキストが input 配列に格納されます。
	sizeof(input): input 配列のサイズ（文字数）を指定します。このことは、
    		input 配列が最大でいくつの文字を格納できるかを示しています。
	stdin: fgets がテキストを読み取るためのストリーム。この場合、標準入力から読み取ります。
		したがって、この行はユーザーにキーボードからテキストを入力する機会を提供し、そのテキストは input 配列に格納されます。sizeof(input) は input 配列の最大サイズで、入力文字列がこのサイズを超えないようにします。
    
    */
    fgets(input, sizeof(input), stdin);
    //scanf("%s", &input); //なぜだめなのか？

    countWords(input);

    while(1);
}


int isWhitespace(char c) {
    return c == ' ' || c == '\n' || c == '\t';
}

void countWords(const char *text) {
    int count = 0;
    int insideWord = 0;

    
    //始まったら１、そして、ずっと０return、Whitespaceが発現されたら０に戻ってcount
    while (*text) {
        if (isWhitespace(*text)) {
            insideWord = 0;
        } else if (!insideWord) {
            count++;
            insideWord = 1;
        }
        text++;
    }

    printf("出現回数: %d\n", count);
}