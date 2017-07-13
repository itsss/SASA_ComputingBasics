/*#include <stdio.h>

int arr[26][26];

int f(int n, int r)
{
   if(arr[n][r]) return arr[n][r];     //���� ���� �ִٸ� �׳� ��������
   if(n == r) return 1;    //n������ r���� �����ϴ� ����� 1����
   if(r == 1) return n;    //n������ 1���� �����ϴ� ����� n����
   return arr[n][r] = f(n-1, r) + f(n-1, r-1); //��� ����
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

