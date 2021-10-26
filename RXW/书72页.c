#include<stdio.h>
int main()
{
	int a,b,max;
	printf("please input two number:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	printf("max=%d",max);
	return 0;
}
