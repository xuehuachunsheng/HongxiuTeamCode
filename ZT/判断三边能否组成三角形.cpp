#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,s;
	scanf("%f%f%f",&a,&b,&c);
	d=(a+b+c)/2;
	if(a+b>c&&b+c>a&&a+c>b)
	{
	s=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("%.2f",s);
	} 
	else 
	printf("No solution!"); 
return 0;
}
