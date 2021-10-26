#include<stdio.h>
int main()
{
	double i=1,p=1,e=1;
	while(p>=0.00001)
	{
	  p=p/i;
      e=e+p;
	  i=i+1;
	  printf("%lf\n",i);
	}
	printf("%f",e);
	return 0;
}

