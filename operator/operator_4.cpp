#include <stdio.h>

int main()
{
	int a, b;
	
	a = 5;
	b = (--a)+2;
	printf("%d %d\n", a, b);
	
	a = 5;
	b = (a--)+2;
	printf("%d %d\n", a, b);
}
