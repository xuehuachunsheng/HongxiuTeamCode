#include<stdio.h>
int main()
{
	int m,n;
	int t,i;
	int j;
	scanf("%d,%d",&m,&n);
	j=m*n;
	int arr[i][t];
	for(i=0;i<m;i++)
	{
		for(t=0;t<n;t++)
		{
			arr[i][t]=j;
			j--;
			printf("%-3d",arr[i][t]);
		}
		printf("\n");
	}
	return 0;
 } 
