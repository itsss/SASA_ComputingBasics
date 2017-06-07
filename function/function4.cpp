#include <stdio.h>

void hello();
void goodbye();

int main(void)
{
	hello();
	hello();
	
	for(int i = 0; i < 5; i++)
	{
		hello();
	}
	return 0;
}

void hello()
{
	printf("Hello SASA\n");
}
