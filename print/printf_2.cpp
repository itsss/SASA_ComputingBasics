#include <stdio.h>

int main(void)
{
	int i;
	char c;
	float f;
	
	scanf("%d:%c:%f", &i, &c, &f);
	printf("%d \t %c \t %f", i, c, f);
	
	return 0;
}
