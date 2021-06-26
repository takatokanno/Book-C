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

void hello3TimesRepeat()
{
	int i;
	for (i = 1; i < 4; i++)
		printf("こんにちは%d\n", i);

}

void displayMultiplicationCalculation()
{
	int i, j;

	for (j = 1; j <= 9; j++)
		for (i = 1; i <= 9; i++)
			printf("%d*%d=%d\n", j, i, j * i);

}

void eGetUpToLoop()
{
	char a;
	do {
		a = getchar();
		printf("%c", a);
	} while (a != 'e');
}

void suspendRepeating()
{
	int a, b = 1;
	for (a = 0; a < 5; a++) {
		if (a + b >= 3)
			break;
		printf("%d+%d=%d\n", a, b, a + b);
	}
}

void repeatingNextTimesMove()
{
	int a, b = 1;
	for (a = 1; a < 5; a++) {
		if (a + b == 3)
			continue;
		printf("%d+%d=%d\n", a, b, a + b);
	}
}

void omikuji()
{
	char a;

	printf("1～3で好きな数字を入力してください\n");
	a = getchar();

	switch (a) {
	case '1':
		printf("中吉\n");
		break;
	case'2':
		printf("大吉\n");
		break;
	case'3':
		printf("小吉\n");
		break;
	default:
		printf("入力が間違っています。\n");
	}
}
void wordCounter()
{
	char c = '\0';
	char prevletter;
	int wordnum;
	int word_in;

	while (1)
	{
		wordnum = 0;
		word_in = 0;
		prevletter = '\0';
		printf("文字列を入力してください:");
		while (1)
		{
			c = getchar();
			if (c == '\n')
			{
				if (word_in)
					wordnum++;
				break;
			}
			prevletter = c;
			if (c == ' ' || c == '.')
			{
				if (word_in)
				{
					wordnum++;
					word_in = 0;
				}
			}
			else
				word_in = 1;
		}
		if (prevletter == '\0')
			break;
		printf("ワード数:%d\n", wordnum);
	}
}

void displayAsciiCodeTable()
{
	int x, y;
	char c;

	for (x = 2; x < 8; x++)
		printf("16: 10:c | ");
	printf("\n");
	for (x = 2; x < 8; x++)
		printf("---------+-");
	printf("\n");

	for (y = 0; y < 16; y++)
	{
		for (x = 2; x < 8; x++)
		{
			c = x * 16 + y;
			printf("%2x:%3d*%c | ", c, c, c);

		}
		printf("\n");
	}
}
