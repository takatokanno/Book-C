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

