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

void