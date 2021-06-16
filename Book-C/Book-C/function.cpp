#include "function.h"
#include <stdio.h>
#include <string.h>

//チャプター２"演算子"

void calculatingOperator()
{
	printf("5+5は%dです。\n", 5 + 5);
	printf("5-5は%dです。\n", 5 - 5);
	printf("5*5は%dです。\n", 5 * 5);
	printf("5/5は%dです。\n", 5 / 5);
	printf("5/3のあまりは%dです。\n", 5 % 3);

}

void assignmentOperator()
{
	int a = 90;
	
	a += 10;
	printf("90に10を足したら%dです。\n", a);

}

void incrementDecrementOperator()
{
	int a = 1;
	printf("はじめは%dでした。\n", a);

	a++;
	printf("１増えて%dになりました。\n", a);

	a--;
	printf("１減って%dになりました。\n", a);

}

void differenceOfPrepositionalAndPostpositional()
{
	int a = 1, b = 1;

	printf("前置だと%dになります。\n", ++a);
	printf("後置だと%dになります。\n", b++);

}

void comparisonOperators()
{
	int a = 10, b = 20;

	printf("a=%d b=%d\n", a, b);
	printf("a<b ・・・%d\n", a < b);
	printf("a>b ・・・%d\n", a > b);
	printf("a==b ・・・%d\n", a == b);
	printf("a=b ・・・%d\n", (a = b));

}
void logicalOperator()
{
	int a = 30, x;

	x = (0 <= a && a <= 100) ? a : 0;
	printf("%d\n", x);

}