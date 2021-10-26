#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b&&b==c)
		{
			printf("等边三角形");
		}
		else if(((a==b)&&b!=c)||((b==c)&&c!=a)||((a==c)&&c!=b))
		{
			printf("等腰三角形");
		}
		else if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
		{
			printf("直角三角形");
		}
	}
	else
	{
		printf("不可以组成三角形"); 
	}
	return 0;
 } 
