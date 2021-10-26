#include<stdio.h>
#define M 3
#define N 3
int main(void)
{
	int array[M][N];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
