#include<stdio.h>
int judge(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return 1;
		}
	}
	return 2;
}

int main()
{
	int x;
	int a;
	scanf("%d",&x);
	a=judge(x);
	if(a==2)
	{
		printf("prime");	
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
