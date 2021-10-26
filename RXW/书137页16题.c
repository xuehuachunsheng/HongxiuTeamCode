#include<stdio.h>
int main(void)
{
	int i=1,j=1,a;
	for(i;i<=9;i++)//¿ØÖÆÐÐ 
	{
		j=1;
		for(j;j<=9;j++)
		{
			a=j;
			if(a==i||a==10-i)
			{
				printf("  ");
				continue;
			}
			a=a+1; 
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
