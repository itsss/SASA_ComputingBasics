#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a % 2 == 0 || b >= a) printf("1");
	else printf("0");
}
