#include<stdio.h>
int main(void)
{
	char c[20];
	int i;
	for(i=0;i<20;i++)
	{
		scanf("%c",&c[i]);
	}
	for(i=0;i<20;i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
