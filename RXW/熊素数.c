#include<stdio.h>
int main()
{
	int d,n;
	scanf("%d",&n);
	for(d=2;d<n;d++)
	{
		if(n%d==0)
		{
			break;
		}
	}
	if(d<n)
	{
		printf("%d 不是素数",n);
	}
	else
	{
		printf("%d 是素数",n);
	}
	return 0;
}
