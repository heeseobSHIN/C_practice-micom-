	char text[] = {
		"#include <stdio.h>\n"
		"#define	MAX 100\n"
		"/* 関数プロトタイプ宣言 */\n"
		"void sort_array(char array[]);\n"
		"void main(void);\n"
		"void main(void)\n"
		"{\n"
		"	char array[] = \"asdasd\";\n"
		"	int	sum;\n"
		"	int	count;\n"
		"	char	a = 5;\n"
		"	char	b = 1;\n"
		"	a = a >> 1 << 2 + b;\n"
		"\n"
		"\n"
		"	/* 最大加算数まで加算する */\n"
		"	for( count = 0, sum = 0; count <= MAX; ++count){\n"
		"		sum += count;\n"
		"		sum = sum + 3.14;\n"
		"	}\n"
		"\n"
		"	/* 結果の出力 */\n"
		"	printf(\"\\n 1〜%d sum = %5d\\n\", count-1, sum);\n"
		"	sort_array(array);\n"
		"	while(1);\n"
		"}\n"
	};