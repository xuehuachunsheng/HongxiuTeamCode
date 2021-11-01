#include<stdio.h>
int main()
{
	long long n,Sn=0,t,i;
	scanf("%d",&n);
	for(Sn=0;n>0;n--)
	{
		for(i=n,t=1;i>0;i--)
		{
			t=t*i;
		}
		Sn=Sn+t;
	}
	printf("%lld",Sn);
	return 0;
}
