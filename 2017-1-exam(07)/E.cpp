#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{ 
	char str[50];
	gets(str);
	for(int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);
	}
	for(int i = 0; str[i]; i++)
	{
		if(str[i] == 32) 
		{
			str[i+1] = toupper(str[i+1]);
		}
	}
	str[0] = toupper(str[0]);
	printf("%s", str);
}

