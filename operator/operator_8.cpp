#include <stdio.h>

int main(void)
{
	char a = 15;
	printf("%d\n", a<<1);
	printf("%d\n", a>>1);
	printf("%d\n", a<<4);
	
	int b = 2100000000;
	printf("%d\n", a<<1);
	
	int c = -8;
	printf("%d\n", c>>1);
	
	unsigned int d = 2100000000;
	printf("%u\n", d<<1);
}
