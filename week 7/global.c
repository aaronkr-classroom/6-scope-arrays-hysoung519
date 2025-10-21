//global.c
#include <stdio.h>

int result;

int Sum(int x, int y)
{
	result = x + y;
}

int main()
{
	int a = 3, b = 5;
	result = Sum(a, b);

	printf("%d + %d = %d", a, b, result);

	return 0;

}