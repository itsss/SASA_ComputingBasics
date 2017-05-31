#include <stdio.h>
#include <ctype.h>

{
 	int i=0, len;
	char str[100]; 
	gets(str);
	i=0;
	while (str[i] != '\0')
	{
 		printf("%c",tolower(str[i])); 
 		i++;
	}
}

