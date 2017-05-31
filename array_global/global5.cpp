#include <stdio.h>

int a=3, b=4, c=5;

int main()
{
	printf("1: %2d %2d %2d\n", a, b, c);
	{
		int a=13, b=14;
		printf("2: %2d %2d %2d\n", a, b, c);
		{
			int a = 23;
			b=24, c=25;
			
			printf("3: %2d %2d %2d\n", a, b, c);
		}
	}
	printf("4: %2d %2d %2d\n", a, b, c);
	
	return 0;
}
