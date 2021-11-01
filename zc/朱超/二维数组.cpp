#include<stdio.h>
int main()
{
	int arr[2][5]={{11, 12, 13, 14, 15},{21, 22, 23, 24, 25}};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",arr[i][j]);
			
		}
		printf("\n");
	}
	return 0;
 } 
