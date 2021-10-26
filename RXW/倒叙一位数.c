#include<stdio.h>
#define M 6
int main()
{
	int a[M]={1,2,3,4,5,6};
	int i;
	int j;
	j=a[5];
	for(i=5;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=j;
	for(i=0;i<M;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
