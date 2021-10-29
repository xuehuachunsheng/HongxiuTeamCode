#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],i,j;
	srand(2);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			a[i][j]=j*10+i+1;
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
