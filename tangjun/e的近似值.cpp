#include<stdio.h>
#include<math.h> 
int main()
{
	double d=1,b=1,e=0;
	int i=1; 
	while(fabs(d)>=1.0e-5)
	{	
		e=e+d;
		b=b*i;
		d=1/b;
		i++;
	}
	printf("%.5lf\n",e);	
	return 0;
}
