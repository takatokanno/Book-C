#include "function.h"
#include <stdio.h>
#include <string.h>

//�`���v�^�[03���䕶

void oddNumberEvenNumberJudgement()
{

	int a = 5;

	if (a % 2 == 0)
		printf("%d�͋����ł��B\n", a);
	else
		printf("%d�͊�ł��B\n", a);

}

void scoreEvaluation()
{
	int s = 69;

	printf("���Ȃ��̓_����%d�_�ł��B\n", s);

	if (s < 70){
		printf("���ς܂ł���%d�_�B\n", 70-s);
		printf("�撣��܂��傤�I\n");

	}
	else{
		printf("�悭�ł��܂����I\n");
	}
}

void characterDetermining()
{
	char c = '#';
	
	printf("%c��", c);

	if ('0' <= c && c <= '9')
			printf("�����ł��B\n");
	else if ('a' <= c && c <= 'z')
			printf("�������ł��B\n");
	else if ('A' <= c && c <= 'Z')
			printf("�啶���ł��B\n");
	else
			printf("�L���ł��B\n");
}

void evaluation()
{
	int a = 90;

	if (a > 80) {
		if (a == 100)
			printf("���_�ł��B\n");
		else
			printf("���������ł��B\n");
	}
	else

		printf("�撣��܂��傤�B\n");
}

void hello3TimesRepeat()
{
	int i;
	for (i = 1; i < 4; i++)
		printf("����ɂ���%d\n", i);

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

	printf("1�`3�ōD���Ȑ�������͂��Ă�������\n");
	a = getchar();

	switch (a) {
	case '1':
		printf("���g\n");
		break;
	case'2':
		printf("��g\n");
		break;
	case'3':
		printf("���g\n");
		break;
	default:
		printf("���͂��Ԉ���Ă��܂��B\n");
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
		printf("���������͂��Ă�������:");
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
		printf("���[�h��:%d\n", wordnum);
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
