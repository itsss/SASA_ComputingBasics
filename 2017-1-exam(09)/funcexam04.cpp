#include <stdio.h>

int n, a, b, d[1010];

int maxi(int, int);

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}

int maxi(int a, int b)
{
	int cnt, pos=a;
	cnt = d[a];
	for(int i = a; i <= b; i++)
	{
		if(cnt < d[i]) 
		{
			cnt = d[i];
			pos=i;
		}
	}
	return pos;
}
