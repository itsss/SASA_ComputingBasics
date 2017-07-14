#include <stdio.h>

int swap(int *x, int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}

int main() 
{
    int a, b;
    a=10;
    b=20;
    swap(&a, &b);
    printf(" a=%d  b=%d  \n", a, b);
}
