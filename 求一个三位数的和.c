#define _CRT_SECURE_NO_WARNINGS 1
#define N 2

#include <stdio.h>
#include <math.h>

int main(void)
{
	int f = 678;
	int a = f / 100;
	int b = (f - (a * 100))/10;
	int c = f % 10;
	printf("%d%d%d", c, b, a);
	return 0;
}