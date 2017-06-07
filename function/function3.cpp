#include <stdio.h>

void hello();
void goodbye();

int main(void)
{
	hello();
	goodbye();
	return 0;
}

void hello()
{
	printf("Hello SASA\n");
}

void goodbye()
{
	printf("Goodbye SASA\n");
}
