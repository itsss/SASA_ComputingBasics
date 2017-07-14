#include <stdio.h>

int main()
{
    int in, i, flag;
    printf("숫자 입력:");
    scanf("%d", &in);

    flag=0;
    for(i=2;i<in;i++)
	{
        if(in%i==0) flag=1;
    }
    if(flag==0) printf("%d는 소수\n", in);
    else printf("%d는 소수 아님 \n", in);
}
