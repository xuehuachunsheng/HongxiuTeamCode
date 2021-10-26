#include<stdio.h>
long fact(long n);//先说一声后面有这个函数 
int main(void)
{
	int n;
	long result;
	printf("输入n:");
	scanf("%d",&n);
	result=fact(n);
	if(result!=0)
	{
		printf("%d!=%ld\n",n,result);
	}
}

long fact(long n)
{
	if(n<0)
	{
		printf("数据错误\n");
		return 0;
	}
	else if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
