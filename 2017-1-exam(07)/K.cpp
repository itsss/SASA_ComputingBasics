#include <stdio.h>

int main (void)
{
	char a[2];
	int i;
	scanf("%s", a);
	if(a[0] == 'K') i = 1;
	if(a[0] == 'M') i = 2;
	if(a[0] == 'G') i = 3;
	if(a[0] == 'T') i = 4;
    switch (i) {
        case 1:
            printf("Kilobyte");
            break;
        case 2:
            printf("Megabyte");
            break;
        case 3:
            printf("Gigabyte");
            break;
        case 4:
	    printf("Terabyte");
	    break; 

  }
}
