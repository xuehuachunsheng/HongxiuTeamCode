#include<stdio.h>
#define R 3
#define C 5
int main()
{
	int matrix[R][C];
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			matrix[i][j]=i*i+j*j;
		}
	}
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
