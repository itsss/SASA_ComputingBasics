#include <stdio.h>

int f(int k)
{
	if(k == 1) return 1;
	return f(k-1) * k; //factorial (ex. 5!)
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
}
