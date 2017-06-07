#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	for(int i = a; i <= b; i++)
	{
		printf("%d´Ü\n", i); 
		for(int j = 1; j < 10; j++)
		{
			printf("%d*%d=%d\n", i, j, i*j);
		}
	}
}
