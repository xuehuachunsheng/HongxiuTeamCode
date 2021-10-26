#include<stdio.h>
int main()
{
	int r;
	double area,pi=3.14159;
	for(r=1;r<=10;r++)
	{
		area=pi*r*r;
		if(area>100)
		break;
		printf("r=%d,area=%.6lf\n",r,area);
	}
	return 0;
}
