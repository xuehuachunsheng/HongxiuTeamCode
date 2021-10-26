#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a,b=0;
	while(x>0)
	{
		a=x%10;
		b=b*10+a;
		x/=10;
	}
	printf("%d",b);
	return 0;
}
