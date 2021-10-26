#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i=0,j=1;
	for(a=1;a<=5;a++,j++)
	{
		for(b=1;b<a;b++)
		{
			printf("*");
		}
		printf(" ");
		for(c=7;c>=a*2-1;c--)
		{
			printf("*");
		}
		printf(" ");
		for(;j==5;j++)
		{
			printf("\b");
		}
		for(d=1;d<a;d++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(e=1;e<=4;e++)
	{
		for(f=1;f>=e-3;f++)
		{
			printf("*");
		}
		printf(" ");
		for(g=1;g<=2*e-1;g++)
		{
			printf("*");
		}
		printf(" ");
		for(h=3;h>=e;h--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}










