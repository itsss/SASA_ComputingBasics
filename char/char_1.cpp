#include <stdio.h>

int main()
{
	char str[20] = "Sejong Academy";
	
	printf("%c\n", str[0]);
	str[5] = '\0';
	printf("%s", str);
}
