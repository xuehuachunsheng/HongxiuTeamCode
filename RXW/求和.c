#include<stdio.h>
int main()
{
	int n,S=0,a=0,i=0;
	scanf("%d",&n);
	while(i<=n-1)
	{
		a=a*10+2;
		S=S+a;
		i=++i;
	}
	printf("%d",S);
	return 0;
}
