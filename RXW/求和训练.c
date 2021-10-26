#include<stdio.h>
#include<math.h>
int main(void) 
{
	double a,b,c,x;
	scanf("%lf %lf %lf",&a,&b,&c);
	double pow(double x,double y);
	x=a+b+c+pow(a,2)+pow(b,2)+pow(c,2)+1/a+1/b+1/c;
	printf("%.2f",x);
	return 0;
}
