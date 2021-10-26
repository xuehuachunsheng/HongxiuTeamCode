#include <stdio.h>
int main()
{
	int i; 
	double x=1,a=0;
	for(i=1;i<=20;i++)
	{
		x=x*i;
		a=a+x;
 	}
    printf("%lf",a);
	return 0;	
}
