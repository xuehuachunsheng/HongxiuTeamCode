#include<stdio.h>
int main()
{
	int a,b,c;
	float max;
	printf("please input three number\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("%f\n\a",max);
	return 0;
}
