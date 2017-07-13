#include <stdio.h>

long long int f(int k)
{
   return k == 1 || k == 2 ? 1 : f(k-2) + f(k-1);
}

int main(void)
{
   int n;

   scanf("%d", &n);
   printf("%lld\n", f(n));
}
