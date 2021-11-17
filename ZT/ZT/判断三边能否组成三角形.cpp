#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,s;
	printf("请输入一个三角形的三边：");
	scanf("%f%f%f",&a,&b,&c);
	d=(a+b+c)/2;
	if(a+b>c&&b+c>a&&a+c>b)
	{
	s=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("该三角形成立，且s=%.1f",s);
	} 
	else 
	printf("该三边无法组成三角形"); 
return 0;
}
