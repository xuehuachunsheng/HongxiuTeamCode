#include<stdio.h>
#include<string.h>
#define M 80
int main(void)
{
	char arr[M]={0};
	gets(arr);
	int i;
	for(i=80;i>=0;i--)
	{
		printf("%-0.8c",arr[i]);
	}
	return 0;
}
