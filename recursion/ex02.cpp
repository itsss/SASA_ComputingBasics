#include <stdio.h>

void f(int n)
{
	if(n==0) return;
	
	printf("%2d Hello World!\n", n);
	f(n-1);
}

int main(void)
{
	f(10);
	return 0;
}
