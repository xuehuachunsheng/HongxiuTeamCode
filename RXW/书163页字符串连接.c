#include<stdio.h>
#include<string.h>//字符串函数名 
int main(void)
{
	char c1[20]="I am";
	char c2[ ]=" a boy";
	printf("%s",strcat(c1,c2));//连接字符串的语句 
	return 0;
}
