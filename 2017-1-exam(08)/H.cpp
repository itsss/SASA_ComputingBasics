#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	do
	{
		scanf("%d", &a);
	}
	while(!(a >= 1 && a <= 20));
	{
		int result = pow(a, 2);
		printf("%d", result);
	}
}
