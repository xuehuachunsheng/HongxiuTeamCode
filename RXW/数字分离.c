#include<stdio.h>
#define M 4
int main(void)
{
	int a,b,c,d,e;
	scanf("%d",&b);
	a=b/1000%10;
	c=b/100%10;
	d=b/10%10;
	e=b/1%10;
	printf("%d %d %d %d",a,c,d,e);
	return 0;
}
