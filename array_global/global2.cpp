#include <stdio.h>

int a[5][5];

int main()
{
	for(int i = 0; i < 5; i++, printf("\n"))
	{
		for(int j = 0; j < 5; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
}
