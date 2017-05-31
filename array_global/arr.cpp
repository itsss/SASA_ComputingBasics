#include <stdio.h>

int main()
{
	//&는 메모리 주소를 반환 
	int arr[2][10] = {};
	printf("[0][0]%12d\n[0][1]%12d", &arr[0][0], &arr[0][1]);
	printf("\n\n");
	printf("[0][0]%12d\n[1][0]%12d", &arr[0][0], &arr[1][0]);
}
