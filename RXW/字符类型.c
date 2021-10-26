#include<stdio.h>
int main()
{
	char c;
 	printf("请输入一个字符：");
	scanf("%c",&c);
 	if (c<32&&c==127)
 	{
		printf("控制字符\n");
	}
	else if (c>=48&&c<=57)
		{
			printf("数字字符\n");
		}
	else if (c>=65&&c<=90)
		{
			printf("大写字母\n");
		}
	else if (c>=97&&c<=122)
		{
			printf("小写字母\n");
		}
	else
		{
			printf("其他字符\n");
		}
	return 0;
}
