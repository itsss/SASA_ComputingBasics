#include <stdio.h>
 
long long int dol(int n, int d);
 
int main(void)
{
    long long int c=0;
    long long int d =10;
    scanf("%d", &c);
    printf("%lld\n", dol(c, d));
}
long long int dol(int n, int d)
{
    if(n==0)
    {
    	return 0;
	}
    else return n%d + dol((n-n%d)/10, d);
}

