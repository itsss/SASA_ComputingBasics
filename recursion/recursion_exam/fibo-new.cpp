#include <stdio.h>

int n, c[110];
long long d[110];
long long fibo(int k)
{
    if(c[k] == 1) return d[k];
    if(k <= 2) return 1;
    c[k]=1;
    return d[k]=(fibo(k-2)+fibo(k-1))%1000000007;
}

int main()
{
    scanf("%d", &n);
    printf("%lld", fibo(n)%1000000007);
}
