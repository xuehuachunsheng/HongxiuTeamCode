#include<stdio.h>
int main(void)
{
	long int a,i=0;
	printf("请输入一个数\n");
	scanf("%ld",&a);
	while(a>=10)
	{
		a=a/10;
		i=++i;
	}
	printf("这是一个%ld位数",i+1);
	return 0;
	
 } 
