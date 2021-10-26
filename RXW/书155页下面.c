#include<stdio.h>
#define M 2
#define N 3
int main()
{
	int abc[M][N]={1,2,3,4,5,6};
	int cba[N][M]={0};
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cba[j][i]=abc[i][j];
		}
	}
	for(j=0;j<N;j++)
	{
		for(i=0;i<M;i++)
		{
			printf("%5d",cba[j][i]);
		}
		printf("\n");
	}
	return 0;
}
