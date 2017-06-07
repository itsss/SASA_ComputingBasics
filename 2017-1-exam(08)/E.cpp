#include <stdio.h>

int main()
{
	int a;
	do
	{
		scanf("%d", &a);
	}
	while(a < 1 || a >= 10);
	{
		for(int i = 1; i < 10; i++)
		{
			printf("%d * %d = %2d\n", a, i, a*i);
		}
	}
}
