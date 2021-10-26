#include<stdio.h>
#include<math.h>
int main()
{
	double i=1,k=1;
	double n=100000;
	double e=0,a=0;
	do
	{
		k=k*i;
		a=1/(k);
		e+=a;
		i++;
	}while(i<=n);
	e+=1;
	printf("%lf",e);
	return 0;
}
