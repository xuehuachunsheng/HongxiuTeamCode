#include<stdio.h>
int main()
{
	char line[81];//不超过80个字符 
	printf("请输入字符串：");
	gets(line);
	printf("这个字符串是：%s\n",line);//%s是输出字符串用的 
	return 0;
}
