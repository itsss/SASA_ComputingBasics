#include <stdio.h>

int main()
{
	int forcnt, cnt=0;
	for(int i = 1; forcnt < 5; i++)
	{
		int a;
		scanf("%d", &a);
		if(a > 0) 
		{
			cnt += a;
			forcnt++;
		}
	}
	printf("%d", cnt);
}
