/*#include <stdio.h>

int arr[26][26];

int f(int n, int r)
{
   if(arr[n][r]) return arr[n][r];     //계산된 것이 있다면 그냥 돌려주자
   if(n == r) return 1;    //n개에서 r개를 선정하는 방법은 1가지
   if(r == 1) return n;    //n개에서 1개를 선정하는 방법은 n가지
   return arr[n][r] = f(n-1, r) + f(n-1, r-1); //재귀 공식
}

int main(void)
{
   int n, r;
   scanf("%d %d", &n, &r);
   printf("%d", n < r ? 0 : f(n, r));
}*/

#include <stdio.h>

int f(int n, int r)
{
   if( n < r ) return 0;
   if( n == r ) return 1;
   if( r == 1 ) return n;
   return f(n-1, r) + f(n-1, r-1);
}

int main(void)
{
   int n, r;

   scanf("%d %d", &n, &r);
   printf("%d\n", f(n, r));
}

