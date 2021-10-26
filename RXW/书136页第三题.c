#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,area;
	printf("请输入三角形三边长并用空格隔开\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
//	{
		printf("可以构成三角形\n"); 
		d=(a+b+c)/2;
		area=sqrt(d*(d-a)*(d-b)*(d-c));
		printf("三角形的面积是%f",area);
//	}
	else
	{
		printf("不能构成三角形"); 
	}
	return 0;
}
