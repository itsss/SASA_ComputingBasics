#include <stdio.h>

int main(void)
{
   char str[30];
   scanf("%s", str);
   for(int i=0; str[i]; i++) printf("%c", str[i] >= 97 ? str[i]-32 : str[i]);
}
