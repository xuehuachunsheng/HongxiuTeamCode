#include<stdio.h>
#define M 3
int main()
{
	int a[M];
	int i,max;
	for(i=0;i<M;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		max=a[0];
	}
	else
	{
		max=a[1];
	}
	if(max<a[2])
	{
		max=a[2];
	}
	printf("%d",max);
	return 0;
}
