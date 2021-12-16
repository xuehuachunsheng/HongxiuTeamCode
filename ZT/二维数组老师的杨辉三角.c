#include<stdio.h>//老师课上的方法 
#define H 10 
#define L 10
int main(void)
{
	int a[H][L]={1};
	int i,j;
	
	for(i=1;i<10;i++)
	{
	 a[i][0]=1;
	for(j=1;j<10;j++)
	  a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0;i<10;i++)
	{
	 for(j=0;j<=i;j++) 
		printf("%5d",a[i][j]);
		printf("\n");  
	}
	return 0;
 }
