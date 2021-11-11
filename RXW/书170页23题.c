#include<stdio.h>
int main()
{
	int i,j;
	int a[][]; 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==j)
			{
				a[i][j]=1;
				printf("%d",a[i][j]);
			}
			else
			{
				a[i][j]=0;
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
	}
}
