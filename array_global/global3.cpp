#include <stdio.h>

int n = 1; 

int main()
{
	printf("print01: %d\n", n);
	
	int n = 2;
	printf("print02: %d\n", n);
	
	for(int n = 3; n <= 5; n++)
	{
		printf("print%02d: %d\n", n, n);
	}
}
