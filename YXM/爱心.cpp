#include<stdio.h>
int main()
{
	int i,j;	
	for(i=1;i<9;i++)
	{
		for(j=1;j<10;j++)
		{ 
			if(i==2&&j!=5&&j<=7&&j>=3)
			printf(" *");
			else if(i==3&&(j==2||j==5||j==8))
			printf(" *");
			else if(i==4&&(j==2||j==8))
			printf(" *");
			else if(i==5&&(j==3||j==7))
			printf(" *");
			else if(i==6&&(j==4||j==6))
			printf(" *");
			else if(i==7&&j==5)
			printf(" *");
			else
		    printf("  ");
		}
		printf("\n");
	}
 } 
