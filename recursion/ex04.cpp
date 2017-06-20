#include <stdio.h>

int f(int n)
{
	if(n == 1) return 1; //조건을 넣어 return을 해야 Error 발생하지 않음. 
	return f(n-1) + n;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
}
