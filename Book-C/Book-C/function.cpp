#include "function.h"
#include <stdio.h>
#include <string.h>

//チャプター03制御文

void oddNumberEvenNumberJudgement()
{

	int a = 5;

	if (a % 2 == 0)
		printf("%dは偶数です。\n", a);
	else
		printf("%dは奇数です。\n", a);

}

void scoreEvaluation()
{
	int s = 69;

	printf("あなたの点数は%d点です。\n", s);

	if (s < 70){
		printf("平均まであと%d点。\n", 70-s);
		printf("頑張りましょう！\n");

	}
	else{
		printf("よくできました！\n");
	}
}

void characterDetermining()
{
	char c = '#';
	
	printf("%cは", c);

	if ('0' <= c && c <= '9')
			printf("数字です。\n");
	else if ('a' <= c && c <= 'z')
			printf("小文字です。\n");
	else if ('A' <= c && c <= 'Z')
			printf("大文字です。\n");
	else
			printf("記号です。\n");
}

void evaluation()
{
	int a = 90;

	if (a > 80) {
		if (a == 100)
			printf("満点です。\n");
		else
			printf("もう少しです。\n");
	}
	else

		printf("頑張りましょう。\n");
}

