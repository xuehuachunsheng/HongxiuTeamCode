#include<stdio.h>//利用嵌套函数实现1到n之间所有素数的和。
int sum_ss(int x);
int main()
{
	int n,sum;
	printf("输入n的值：");
	scanf("%d",&n);
	sum=sum_ss(n);
	printf("\n1到%d的素数和为%d",n,sum);
	return 0;
 } 
 
 int sum_ss(int x)
 {
 	int i,j,sum_ss=0;
 	printf("1到%d的素数分别为：",x);
 	for(i=2;i<=x;i++)
 	{
	for(j=2;j<i;j++)
 	 if(i%j==0) break;
 	if(j>=i) 
	{
	printf("%-5d",i); 
	sum_ss+=i; 
	}
	 }
	 return sum_ss;
 }
