#include <stdio.h>

int f(int n, int r)
{
	if(n == r) return 1;
	if(r == 1) return n;
	return f(n-1, r) + f(n-1, r-1);
}

int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d\n", f(n, r));
}

//nCr ±¸ÇÏ±â 
