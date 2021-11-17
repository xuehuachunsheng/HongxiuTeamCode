#include<stdio.h>
int main()
{
int i,j;//i为行，j为列
char ch; 
for(i=1;i<=4;i++)//外循环 
{
	ch='A';//每一次的外循环都从A开始 
	for(j=1;j<=7-i;j++)
	{
		printf(" ");//每一行从7-i开始输出A,不足时补上空格 
		
	}
	for(j=1;j<=2*i-1;j++)//每一行输出2*i-1个字母 
	{
		printf("%c",ch);
		ch++; //输出字母，每个字母递增 
	}
	printf("\n");//开启每次外循环之前先输出一个回车 
	
 } 


return 0;
}
