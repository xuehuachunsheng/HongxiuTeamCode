#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d,%d",m,n);
	int arr[m][n]={};
	int a;
	for(;m>0;m--)
	{
		for(;n>0;n--)
		{
			scanf("%d",arr[m][n]);
		}
	}
		for(;m>0;m--)
	{
		for(;n>0;n--)
		{
			printf("%3d",arr[m][n]);
		}
	}
	return 0;
 } 
