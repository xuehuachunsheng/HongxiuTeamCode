#include<stdio.h>
double power(double n,int p);/*函数调用 ANSI函数原型power，数据类型为double//原括号里面的double n，int p 
                             表示power（）函数的参数数据类型*/ 
int main(void)//主函数 
{
	double x,xpow;//定义函数变量 
	int exp;
	
	printf("Enter a number and the positive integer power ");
	printf("to which\nthe number will be raised Enter q");
	printf("to quit.\n");
	while(scanf("%lf%d",&x,&exp)==2)
	{
		xpow=power(x,exp);//函数调用，调用power函数，传递两个值给power，通过计算后，将结果返回给主调函数，并赋值给xpow 
		printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
		printf("Enter next pair of numbers or q to quit\n");
	}
	printf("Hope you enjoyed this power trip--bye!\n");
	
	return 0;
}

double power(double n,int p)//函数定义，函数定义结尾没有分号，但是该函数原型的末尾有分号，函数花括号里面的内容就是 
{ //该函数需要完成的任务代码 
	double pow=1;
	int i;
	
	for(i=1;i<=p;i++)
	pow*=n;
	
	return pow;//返回pow的值 
}
