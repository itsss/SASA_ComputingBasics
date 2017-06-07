#include <stdio.h>

void hello()
{
	printf("Hello SASA\n");
	return;
}

int open()
{
	return 2015;
}

int main(void)
{
	hello();
	printf("%d\n", open());
	return 0;
}
