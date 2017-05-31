#include <stdio.h>

int main()
{
	char arr[100];
	int cnt;
	scanf("%s", &arr);
	for(int i = 0; arr[i]; i++)
	{
		if(arr[i] == '0') cnt += 1;
	}
	printf("%d", cnt);
}
