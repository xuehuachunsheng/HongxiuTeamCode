#include<stdio.h>
int main()
{
	int a,b=0,D=0;
	scanf("%d",&a);
	while(b<=a)
	{
		D=D+b*b;
		b=++b;
	}
	printf("%d",D);
	return 0;
}
