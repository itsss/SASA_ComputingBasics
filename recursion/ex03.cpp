#include <stdio.h>

void f(int n)
{
	if(n==0) return;
	
	f(n-1);
	printf("%2d Hello World!\n", n);
}

int main(void)
{
	f(10);
	return 0;
}
