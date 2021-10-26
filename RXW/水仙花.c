#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x;
	double pow(double x,double y);
	for(x=100;x<1000;x++)
	{
		a=x/100%10;
		b=x/10%10;
		c=x/1%10;
		if(x==pow(a,3)+pow(b,3)+pow(c,3))
		{
			printf("%d\n",x);
		}
	}
	return 0;
}
