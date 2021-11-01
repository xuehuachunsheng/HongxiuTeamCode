#include<stdio.h>
int main()
{
	int n,a,sn=0,t=0;
	scanf("%d",&n);
	for(a=2;n>0;n--)
	{
		t=t+a;
		sn=sn+t;
		a=a*10;
	}
	printf("%d",sn);
	return 0;
}
