#include<stdio.h>
int main(void)
{
	int a=1,i,n=1,t=0;
	long long s=0;
	for(a;a<=9;a++)
	{
		t=0,s=0;
		for(i=1;i<=a;i++)
		{
			t=t*10+a;
			s=s+t;
			printf("%d+",t);
		
		}
		printf("\b=%lld",s);
		printf("\n");
	}
	return 0;
}
