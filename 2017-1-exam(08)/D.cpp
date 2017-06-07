#include <stdio.h>

int main()
{
	int a;
	scanf("%x", &a);
	for(int i = 0; i < 10; i++)
	{
		printf("%x ", i);
	}
	if(a >= 10)
	{
		for(int i = 10; i <= a; i++)
		{
			printf("%X ", i);
		}
	}
}
