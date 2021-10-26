#include<stdio.h>
#define M 3
#define N 4
int main(void)
{
	int matrix[M][N]={{21,32,43,56},{12,89,76,70},{234,30,54,88}};
	int max=0;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)c
		{
			if(matrix[i][j]>=max)
			{
				max=matrix[i][j];
			}
		}
	}
	printf("%d",max);
	return 0;
}
