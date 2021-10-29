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
			if(i%2==0)    //ÆæÊý
			{
				a[i][j]=i*10+j+1;
				printf("%3d",a[i][j]);
			} 
			else
			{
				a[i][j]=i*10+10-j;
				printf("%3d",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
