#include<stdio.h>
#define M 10
#define N 10
int main()
{
	int i,j;
	char array[M][N]={0};
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(i<j&&i<=3&&j<=8&&i+j<=8&&i+j>=1)
			{
				array[i][j]='北';
			}
			else if(i==j||i+j==9)
			{
				array[i][j]='  ';
			}
			else if(i>j&&i<=8&&j<=3&&i+j<=8&&i+j>=1)
			{
				array[i][j]='西';
			}
			else if(i>j&&i+j<=17&&i+j>=10&&i>=6)
			{
				array[i][j]='南';
			}
			else if(i<j&&i+j<=19&&j>=6)
			{
				array[i][j]='东';
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			printf("%c%c",array[i][j],array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
