#include<stdio.h>
#define N 10
int main(void)
{
	int array[N];
	int i,j=0,a=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		a=a+array[i];
	}
	a=a/10;
	for(i=0;i<10;i++)
	{
		if(a<array[i])
		{
			j=j+1;
		}
	}
	printf("%d",j);
	
}
