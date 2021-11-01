#include<stdio.h>
int main()
{
	float array0=0.1,array1=0.075,array2=0.05,array3=0.03,array4=0.015,array5=0.01;
	int a;
	int t;
	float l;
	float l1,l2,l3,l4,l5,l6;
	scanf("%d",&a);
		for(t=1;a>1000000;t++)
		{
			a--;
			if(a=1000000)
			{
				l6=t*array5;	
			}
		
		}
		for(t=1;a>600000&&a<=1000000;t++)
		{
			a--;
			if(a=600000)
			{
				l5=t*array4;
			}
		}
		for(t=1;a>400000&&a<=600000;t++)
		{
			a--;
			if(a=400000)
			{
				l4=t*array3;
			}
		}
		for(t=1;a>200000&&a<=400000;t++)
		{
			a--;
			if(a=200000)
			{
				l3=t*array2;
			}
		}
		for(t=1;a>100000;t++)
		{
			a--;
			if(a=100000)
			{
				l2=t*array1;
			}
		}
		for(t=1;a<=100000&&a>0;t++)
		{
			a--;
			if(a=0)
			{
				l1=t*array0;
			}
		}
		l=l1+l2+l3+l4+l5+l6;
		printf("%f",l);
		return 0;
}
