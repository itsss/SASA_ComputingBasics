#include <stdio.h>

void func01(void)
{
	printf("func01\n");
}

void func02(int a)
{
	printf("+_+: %d\n", a);
}

int func03(void)
{
	return 2015;
}

int func04(int a, int b)
{
	return a > b ? a - b : b - a;
}

int main(void)
{
	func01();
	func02(5);
	printf("%d\n", func03());
	printf("%d\n", func04(5, 10));
	return 0;
}
