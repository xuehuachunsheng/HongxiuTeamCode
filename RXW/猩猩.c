#include<stdio.h>
int main(void)
{
	int i,j,a;
	for(i=1;i<=11;i++)//控制行 
	{
		for(j=1;j<=11;j++)//控制列 
		{
			if(i<j&&i<=5&&j<=10&&i+j<=11&&i+j>=3)
			{
				printf("北");
			}
			else if(i==j||i+j==12)
			{
				printf("  ");
			}
			else if(i>j&&i<=10&&j<=5&&i+j<=11&&i+j>=3)
			{
				printf("西");
			}
			else if(i>j&&i>=7&&j<=10&&i+j<=21&&i+j>=13)
			{
				printf("南");
			}
			else if(i<j&&j<=11&&i+j>=13&&i+j<=21)
			{
				printf("东");
			}
		}
		printf("\n");
	}
	return 0;
}
