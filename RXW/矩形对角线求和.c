#include<stdio.h>
#define M 3
#define N 3
int main(void)
{
	int array[M][N];
	int i,j,a,b;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	a=array[0][0]+array[1][1]+array[2][2];
	b=array[0][2]+array[1][1]+array[2][0];
	printf("%d %d",a,b);
}
