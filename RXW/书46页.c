#include<stdio.h>
int main()
{
	double a,b,c,max;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	max=a>b?a>c?a:c:b>c?b:c;
	printf("max=%f\n",max);
	return 0;
}
