#include <stdio.h>

int n, cnt=1;

void f(int k, char start, char goal, char use)
{
   if( k == 0 ) return;
  
   f(k-1, start, use, goal);
   printf("%4d: move %d %c to %c\n", cnt++, k, start, goal);
   f(k-1, use, goal, start);
}

int main(void)
{
   scanf("%d", &n);
   f(n, 'A', 'C', 'B');
}
