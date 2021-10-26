#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("     0\n");
	for(i=1;i<6;i++)
	{
		j=4;
		j=j-i;
		for(j;j>=0;j--)
		{
			printf(" ");
		}
		printf("0");
		for(a=0;a<i-a;a++)
		{
			if(a==5)
			break;
			printf(" ");
		}
		printf("0\n");
		
	}
}
