#include "function.h"
#include <stdio.h>
#include <string.h>

//�`���v�^�[�Q"���Z�q"

void calculatingOperator()
{
	printf("5+5��%d�ł��B\n", 5 + 5);
	printf("5-5��%d�ł��B\n", 5 - 5);
	printf("5*5��%d�ł��B\n", 5 * 5);
	printf("5/5��%d�ł��B\n", 5 / 5);
	printf("5/3�̂��܂��%d�ł��B\n", 5 % 3);

}

void assignmentOperator()
{
	int a = 90;
	
	a += 10;
	printf("90��10�𑫂�����%d�ł��B\n", a);

}

void incrementDecrementOperator()
{
	int a = 1;
	printf("�͂��߂�%d�ł����B\n", a);

	a++;
	printf("�P������%d�ɂȂ�܂����B\n", a);

	a--;
	printf("�P������%d�ɂȂ�܂����B\n", a);

}

void differenceOfPrepositionalAndPostpositional()
{
	int a = 1, b = 1;

	printf("�O�u����%d�ɂȂ�܂��B\n", ++a);
	printf("��u����%d�ɂȂ�܂��B\n", b++);

}

void comparisonOperators()
{
	int a = 10, b = 20;

	printf("a=%d b=%d\n", a, b);
	printf("a<b �E�E�E%d\n", a < b);
	printf("a>b �E�E�E%d\n", a > b);
	printf("a==b �E�E�E%d\n", a == b);
	printf("a=b �E�E�E%d\n", (a = b));

}
void logicalOperator()
{
	int a = 30, x;

	x = (0 <= a && a <= 100) ? a : 0;
	printf("%d\n", x);

}