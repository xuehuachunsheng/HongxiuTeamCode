#include<stdio.h>
int cal(int n);
int main(void)
{
	int s;//定义s用于统计桃子总数 
	s=cal(1);// s=桃子总数，限定返回值的为cal（1） 当调用函数递归到cal（1）时，返回调用值 
	printf("共有桃子%d个\n",s);
	return 0;
 } 
 
 int cal(int n)//定义递归函数 
 {
 	if(n==10) return 1;//第十天只有一个桃子，故返回1 
 	else return (cal(n+1)+1)*2;//递归函数，直到cal（1）时，返回递归值 
 }
