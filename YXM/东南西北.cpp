#include<stdio.h>
int main()
{
	int i,j,k;
	{
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=10;j++)
			{
				if(i>j&&i+j<=9)
				printf("西");
				else if(i==j||i+j==11)
				printf("  ");
				else if(i+j<=10&&i<j)
				printf("北");
				else if(i<j&&i+j<=15)
				printf("东");
			}
				printf("\n");
	}
		for(i=6;i<=10;i++)
		{
			for(j=1;j<=10;j++)
			{
				if(i>j&&i+j<=19&&i+j>11)
				printf("南"); 
				else if(i==j||i+j==11)
				printf("  ");
				else if(i>j&&i+j<=10)
				printf("西"); 
				else
				printf("东");
			}
			printf("\n");
		}	
	}	
	return 0;
 } 
