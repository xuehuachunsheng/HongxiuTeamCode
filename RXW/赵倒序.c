#include<stdio.h>
int main()
{
	int a,b,c;
	int d;
	printf("输入任意三位数:");
	scanf("%d",&d);
	a=(d%100)%10;
	b=(d/10)%10; 
	c=d/100; 
	printf("%d%d%d",a,b,c);
	return 0;
 }
