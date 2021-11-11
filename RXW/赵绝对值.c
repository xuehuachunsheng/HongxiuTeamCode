#include <stdio.h>
int fabs(int x)
{
	if(x<0)
	{
		x=-x;
		printf("%d",x);
	}	
	else
	printf("%d",x);
}
int main()
{
	int x;
	scanf("%d",&x);
	fabs(x);
}

