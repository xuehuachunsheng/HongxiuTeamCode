#include<stdio.h>
int main()
{
	int m;//控制行
	int n;//控制列
	int i,j;
	printf("输入列数：");
	scanf("%d",&m);
	n=m; 
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j||i+j==n+1)
			printf(" ");
			else printf("*"); 
		}
		printf("\n"); 
	 } 
	 return 0;
 } 
