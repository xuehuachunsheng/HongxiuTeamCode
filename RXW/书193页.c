#include<stdio.h>
#define PI 3.1415926
int main()
{
	double radius,length,area,volume;
	printf("Input a radius:");
	scanf("%lf",&radius);
	length=2*PI*radius;
	area=PI*radius*radius;
	volume=PI*radius*radius*radius*3/4;
	printf("length=%.2lf,area=%.2lf,volume=%.2lf\n",length,area,volume);
	return 0; 
}
