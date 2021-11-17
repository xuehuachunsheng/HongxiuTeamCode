#include<stdio.h>//定义一个带参的函数 
void pound(int n);//函数声明
int main(void)
{
	int time=5;
	char ch='!';
	float f=6.0;
	
	pound(time);
	pound(ch);//==pound((int) time);
	pound(f);//==pound((int) f);
	
	return 0;
 } 
 
 void pound(int n)//函数风格头，表明函数接受一个int类型的参数 
 {
 	while(n-->0) printf("#");
	 printf("\n"); 
 }
 
