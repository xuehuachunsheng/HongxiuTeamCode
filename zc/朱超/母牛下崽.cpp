#include<stdio.h>
int main()
{
	int a1=1,a2=2,a3=3,a4=4;
	int n,i;
	scanf("%d",&n);
	if(n==1)
	{
		i=a1;
	printf("%d",i);
	return 0;
	}
	if(n==2)
	{
		i=a2;
		printf("%d",i);
		return 0;
	}
	if(n==3)
	{
		i=a3;
		printf("%d",i);
		return 0;
	}
	if(n==4)
	{
		i=a4;
		printf("%d",i);
		return 0;
	}
	for(i=1;n>4;n--)
	{
		i=a1+a2+a3;
		a1=a2;
		a2=a3;
		a3=a4;
		a4=i;
		if(n<4)
		{
			return 0;
		}
	}
	printf("%d",i); 
	return 0;
}
