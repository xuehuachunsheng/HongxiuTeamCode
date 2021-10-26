#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	int k=0;
	printf("input a number:");
	scanf("%lf",&x);
	if(x<0&&fabs(x+3)>1e-6)
	{
		y=x*(x+2)-5;
	}
	else if(x>=0&&x<20&&fabs(x-5)>1e-6&&fabs(x-8)>1e-6)
	{
		y=x*(x-3)+6;
	}
	else
	{
		y=x*(x-3)-10;
	}
	printf("%f\n",y);
	return 0;
}
