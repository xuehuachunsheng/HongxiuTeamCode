#include<stdio.h>
int arr[3][3]={11,12,13,21,22,23,31,32,33};
int main()
{
	int m,n;
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("%3d",arr[m][n]);
		}
		printf("\n");
	}
	printf("\n");
	int temp;
		for(m=0;m<3;m++)
	{
		for(n=0;m<=n;n++)
		{
			temp=arr[m][n];
			arr[m][n]=arr[n][m];
			arr[n][m]=temp;

		}
	}
	printf("sakfhsuklfhkl\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("%3d",arr[m][n]);
		}
		printf("\n");
	}
	return 0;
}
