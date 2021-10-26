#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("请输入一个不多于3位的正整数\n");
	scanf("%d",&a);
	if(a<1000&&a>=100)
	{
		printf("这是一个3位数，每一位分别是");
		b=a/100;
		c=(a/10)%10;
		d=(a/1)%10;
		printf("%d,%d,%d",b,c,d);
	}
	else if(a<100&&a>=10)
	{
		printf("这是一个2位数，每一位分别是");
		c=a/10;
		d=(a/1)%10;
		printf("%d,%d",c,d);
	}
	else if(a<10&&a>=0)
	{
		printf("这是一个1位数，这一位数是%d",a);
	}
	else
	{
		printf("你tm错了，不按规则");
	}
	return 0;
}
