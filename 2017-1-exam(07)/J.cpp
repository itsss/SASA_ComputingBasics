#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	int i = 0;
	int fact = 1;
	scanf("%d", &n);
	while(i<n)
	{
		i++;
		fact *= i;
	}
	printf("%d", fact);
}
