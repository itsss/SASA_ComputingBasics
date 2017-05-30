#include <stdio.h>

int main()
{
	int a = 5, b = 10;
	int c = (a==5 && b==10);
	int d = (a==5 || b==5);
	int e = !a;
	
	printf("%d %d %d", c, d, e);
}
