#include <stdio.h>

int main(void)
{
	int a;
	
	a=5;
	printf("a--\t %d\n", a--);
	printf("a\t %d\n", a);
	
	a=5;
	printf("--a\t %d\n", --a);
	printf("a\t %d\n", a);
}
