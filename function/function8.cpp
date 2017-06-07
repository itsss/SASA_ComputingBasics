#include <stdio.h>

int func01(int a, int b)
{
	return a > b ? a - b : b - a;
}

double func02(int a, int b, int c)
{
	return (a+b+c) / 3.0;
}

int main(void)
{
	printf("%d\n", func01(3, 5));
	printf("%lf\n", func02(3, 5, 8));
	
	return 0;
}
