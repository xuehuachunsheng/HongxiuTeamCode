#include<stdio.h>
int main()
{
	int a,b,c,d,area;
	printf("«Î ‰»Î±ﬂ≥§");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b<=c)
	{
	printf("¥ÌŒÛ");
	}
	else if(a+c<=b)
	{
	printf("¥ÌŒÛ");
	}
	else if(b+c<=a)
	{
	printf("¥ÌŒÛ");
	}
	else
	{
	d=(a+b+c)/2;
	area=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("%d\n",area);
    }
	return 0;
}
