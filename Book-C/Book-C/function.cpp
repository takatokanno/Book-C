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

void