#include<stdio.h>//调用函数实现兔子序列 
int fib(int x);
int main()
{
	int n;
	double sum;
	
	printf("输入兔子序列的第n项："); 
	scanf("%d",&n);
	sum=fib(n);
	printf("兔子序列的第%d项的兔子个数为%.0lf个",n,sum); 
	
	return 0;
}

int fib(int x)
{
	int num=0;
	if(x==1||x==2) num=1;
	else  num=fib(x-1)+fib(x-2);
	return num;
}
