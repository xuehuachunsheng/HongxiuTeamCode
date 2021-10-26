#include<stdio.h>
#define M 10
int main(void) 
{
	int array[M];
	int i=0,a=0;
	for(i=1;i<=9;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&array[0]);
	for(i=0;i<9;i++)
	{
		if(array[i+1]<array[i])
		{
			a=array[i];
			array[i]=array[i+1];
			array[i+1]=a;
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("%d",array[i]);
		printf("\n");
	}
	return 0;
}
