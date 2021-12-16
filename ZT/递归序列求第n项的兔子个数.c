#include<stdio.h>//调用函数实现兔子序列 
int fib(int x);
int main()
{
	int n,i;
	double sum;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 printf("%d",fib(i));
     return 0;
}

int fib(int x)
{
	int num=0;
	if(x==1||x==2) return 1;
	else  return fib(x-1)+fib(x-2);
	
}
