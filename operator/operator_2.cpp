#include <stdio.h>

int main(void)
{
	int a, b;
	a = 49;
	b = 5;
	
	printf("a+b=%d\n", a+b);
	
	a += b;
	printf("a+=b:%d", a);
}
