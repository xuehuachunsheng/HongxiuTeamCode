#include<stdio.h>
int main()
{
	int m,n,t;
	printf("pleasw input a number\n\a");
	scanf("%d",&m);
	printf("please input another number\n\a");
	scanf("%d",&n);
	if(m>n)
	{
		t=m;
		m=n;
		n=t;
	}
	printf("the sorted numbers:%d %d\n",m,n);
	return 0;
}
