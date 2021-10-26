#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入一个整数：");
	scanf("%d",&a);
	b=a;
	if(a<0)
	{
		b=-a;
	}
	printf("%d的绝对值是%d",a,b);
	return 0;4
}
