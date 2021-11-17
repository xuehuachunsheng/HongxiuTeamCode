#include<stdio.h>//二维数珠用双for循环prt，否着结果会出错 
#define H 10 
#define L 10
int main(void)
{
	int a[H][L];
	int i,j;
	
	for(i=0;i<10;i++)
		for(j=0;j<=i;j++)
	   {
	   if(j==0) a[i][j]=1;
	  else if(i==j) a[i][j]=1;
	   else a[i][j]=a[i-1][j-1]+a[i-1][j];
	   }
		
	for(i=0;i<10;i++)
	{
	 for(j=0;j<=i;j++) 
	   printf("%5d",a[i][j]);
	   printf("\n");  
	}
	return 0;
 } 
