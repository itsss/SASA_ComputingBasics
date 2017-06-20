#include <stdio.h>

int n;

int f(int k)
{
	if(n == k) return n;
	return k + f(k+1);
}

int main(void)
{
	scanf("%d", &n);
	printf("%d\n", f(1));
}
