#include<stdio.h>
int main()
{
	int i,j;
	char ch='D';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			putchar(" ");
			
		}
		for(j=1;j<=9-2*i;j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
		ch--;
	}
	return 0;
}
