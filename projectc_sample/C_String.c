#include <stdio.h>

//prototype 
void main(void);
int isOperator(char);
int isWhitespace(char);

//ここから実行
void main(void) {
    char input[80] = "Y = data * 256 + ++a; //comment"; //++a
    char *token = input;
    char *current = input;
    
    while (*current != '\0') {
	    
	    
	//メセジ入れること

    
        if (isWhitespace(*current)) {
		
            *current = '\0';  // 空白文字を NULL 文字で置き換える
	    
            if (token != input) {
		    
                // トークンが空でない場合、トークンを印刷
                printf("%s\n", token);
                token = input;
		
            }
	    
	    
        } else if (isOperator(*current)) {
		
            if (token != input) {
                // トークンが空でない場合、トークンを印刷
                printf("%s\n", token);
                token = input;
		
            }
	    
            // 演算子を印刷
            printf("%c\n", *current);
	    
        } else {
		
            if (token == input) {
		    
                token = current;  // トークンの開始位置を設定
		
            }
	    
        }
	
        current++;
	
    }

    // 残りのトークンを印刷
    if (token != input) {
	    
        printf("%s\n", token);
	
    }

   while(1);
}

/* 演算子であるかどうかを判定する関数*/
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

// 空白文字であるかどうかを判定する関数
int isWhitespace(char c) {
	
    
    return (c == ' ' ||  c == '\n');
    
}