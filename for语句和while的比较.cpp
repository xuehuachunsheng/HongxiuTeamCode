#include<stdio.h>
int main()
{
	int a,b,c,i;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(i==a*a*a+b*b*b+c*c*c)
		printf("%d是水仙花数。\n",i);
	 } 
	return 0;
}
//while(表达式) 满足while(表达式)则进行循环 
//而do while(表达式)是 do开始进行循环直到while(表达式)成立
//for(表达式1；表达式2；表达式3)的意思为表达式1为循环变量初始值，表达式2为进行循环变量的条件
//表达式3为循环变量的增值
