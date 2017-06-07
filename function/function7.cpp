#include <stdio.h>

void func(int a)
{
	if(a%2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
}

int main(void)
{
	func(100);
	func(5);
	return 0;
}
