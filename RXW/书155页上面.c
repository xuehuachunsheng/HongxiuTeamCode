#include<stdio.h>
#define L 2
#define M 4
#define N 3
int main(void)
{
	int i,j,k,c[L][N];
	int a[L][M]={2,4,6,8,1,3,6,5};
	int b[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
	for(i=0;i<L;i++)
	{
		for(j=0;j<N;j++)
		{
			c[i][j]=0;
			for(k=0;k<M;k=k+1)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	 } 
	 for(i=0;i<L;i=i+1)
	 {
	 	for(j=0;j<N;j=j+1)
	 	{
	 		printf("%6d",c[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
	
}
