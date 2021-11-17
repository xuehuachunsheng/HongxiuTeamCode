#include<stdio.h>//语句过长断行的方法 
int main(void)
{
	printf("Here's one way to print a");
	printf("long string.\n");//第一种 
	printf("Here's another way to print a\
 long string.\n ");//第二种 
	printf("Here's the newest way to print a"
	         "long sstring.\n"); //第三种  一四引号配对 二三引号引用的其实是空白 
return 0;
 } 
