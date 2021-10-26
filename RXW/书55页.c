#include<stdio.h>
int main()
{
	char ch;
	printf("输入一个字符然后按回车:");
	ch=getchar();
	printf("你输入的是：");
	putchar(ch);
//	putchar('\n');
	return 0;
}
