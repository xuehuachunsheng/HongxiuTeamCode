#include<stdio.h>
int main()
{
	int i=5;
	float a=8.15,b;
	double c=123456789.456123;
	printf("i=%d,a=%f,c=%f\n",i,a,c);
	b=i;
	i=a;
	a=c;
	printf("i=%d,a=%f,b=%f\n",i,a,b);
	return 0;
}
