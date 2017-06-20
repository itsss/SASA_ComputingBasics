#include <stdio.h>

void f1(void)
{
	printf("Hello SASA\n");
	//return;
}

int f2(void)
{
	return 2017;
}

void f3(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

int f4(int a, int b)
{
	return a>b ? a : b;
}

int main(void)
{
	f1();
	printf("%d\n", f2());
	f3(1, 1);
	printf("%d", f4(2, 5));
}
