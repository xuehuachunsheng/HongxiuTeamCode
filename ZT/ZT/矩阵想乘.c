#include<stdio.h>
#define L 2
#define M 4
#define N 3
int main(void)
{
	int i,j,k;//循环变量 
	int c[L][N];
	int a[L][M]={2,4,6,8,1,3,6,5};//A
	int b[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};//整形数组 //B
	
	for(i=0;i<L;i++)
	 for(j=0;j<N;j++)
	 {
	  c[i][j]=0;//每次内循环c[i][j]==0 
	  for(k=0;k<M;k++)
	    c[i][j]=c[i][j]+a[i][k]*b[k][j]; 
	 } 
	for(i=0;i<L;i++)
	 {
	 for(j=0;j<N;j++)
	  printf("%6d",c[i][j]);//c(0,0),c(0,1),c(0,2),c(1,0),c(1,1),c(1,2) 
	 printf("\n");  
	}
	return 0;
 } 
