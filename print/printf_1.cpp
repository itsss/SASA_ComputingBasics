#include <stdio.h>

int main()
{
	int i = 7;
	float f = 3.14159;
	char ch = 'A';
	
	printf("%4d\n", i);
	printf("%04d\n", i);
	
	printf("%.2f\n", f);
	printf("%.4f\n", f);
	
	printf("%c", ch+1);
	printf("%c\n", ch+2);
	
	int a = 1, b = 2, c = 3;
	printf("%d \" %d \\ %d \n", a, b, c);
	
}
