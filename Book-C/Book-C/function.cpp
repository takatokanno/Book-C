#include "function.h"
#include <stdio.h>
#include <string.h>

//�`���v�^�[04"�z��ƃ|�C���^"

void arrayFactorOfReferenceAndAssignment()
{
	int i;
	int a[] = { 1,2,3,4 };

	for(i = 3; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");
}

void replaceArrayCharacter()
{
	int i = 0;
	char a[] = "NET";
	char b[4];

	while (a[i] != '\0')
	{
		b[i] = a[2 - i];
		i++;
	}
	b[3] = '\0';
	printf("%s�͋t����ǂނ�%s\n", a, b);
}

void getStringLength()
{
	char s1[] = "cat", s2[] = "dog";
	char s[20];
	sprintf_s(s, "I love %s and %s.", s1, s2);
	printf("�u%s�v�̕������� %d\n", s, strlen(s));
}

void multidimensionalArray()
{
	int x, y;
	int a[2][3] = {
		{10,20,30},
		{40,50,60}
	};
	for (y = 0; y < 2; y++) {
		for (x = 0; x < 3; x++)
			printf("a[%d][%d] = %d ", y, x, a[y][x]);
		printf("\n");
	}
}
void displayAddress()
{
	char a;
	short b;

	printf("a�̃A�h���X��%p�Ab�̃A�h���X��%p \n", &a, &b);

}

void pointerPlayValueReference()
{
	char x = 4, y;
	char* p = &x;
	y = *p;
	printf("�ϐ�x�̒l��%d�ł�\n", y);

}

void find_d_FromSentence()
{
	char s[] = "I love dog.";
	char c = 'd';
	char* p = NULL;

	printf("������u%s�v�̒��ɕ����u%c�v", s, c);
	p = strchr(s, c);
	if (!p)
		printf("�͂���܂���B\n");
	else
		printf("�𔭌����܂����B\n");
}

