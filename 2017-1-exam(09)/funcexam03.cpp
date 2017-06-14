#include <stdio.h>

int n, d[100010], k;

int f(int);

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}

int f(int ks)
{
	for(int i = 0; i < n; i++)
	{
		if(ks == d[i]) return i;
	}
	return -1;
}
