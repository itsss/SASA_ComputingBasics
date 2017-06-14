#include <stdio.h>
int main() 
{
	int data[3], tmp;
    for(int i = 0; i < 2; i++)
	{
		for(int j = i+1; j < 3; j++)
		{
			if(data[i] > data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}
}
