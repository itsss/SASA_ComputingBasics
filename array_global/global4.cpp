#include <stdio.h>

int main()
{
	int i = 10, j = 1;
	printf("%d\n", i);
	
	for(int i = 1; i <= 10; i++)
	{
		printf("%2d %2d\n", i, j++);
	}
	printf("%d\n", j);
}
