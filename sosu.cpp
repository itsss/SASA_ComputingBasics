#include <stdio.h>

int main()
{
    int in, i, flag;
    printf("���� �Է�:");
    scanf("%d", &in);

    flag=0;
    for(i=2;i<in;i++)
	{
        if(in%i==0) flag=1;
    }
    if(flag==0) printf("%d�� �Ҽ�\n", in);
    else printf("%d�� �Ҽ� �ƴ� \n", in);
}
