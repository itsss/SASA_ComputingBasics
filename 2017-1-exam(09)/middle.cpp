#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}

int mid(int, int, int);

int main()
{
    scanf("%d%d%d", &n, &m, &x);
    printf("%d\n", mid(n, m, x));
}

int mid(int a, int b, int c)
{
    //중간값 : a
    if( b>a && a>c || c>a && a>b )
    {
        return a;
    }
    
    //중간값 : b
    if( a>b && b>c || c>b && b>a )
    {
        return b;
    }
    
    //중간값 : c
    if( a>c && c>b || b>c && c>a )
    {
        return c;
    }
}
