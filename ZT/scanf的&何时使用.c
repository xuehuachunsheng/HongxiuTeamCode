#include<stdio.h>
int main(void)
{
	int age;
	int assets;
	char pet[30];
	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d %f",&age,&assets);
	scanf("%s",pet);/*scanf在读取字符串时，当读到第一个空白字符(包括空格 制表符 换行符等）就
 认为已经完成读取任务，后续内容不再读取，而是存入缓存区，等待下一次输入scanf
 时，拿缓冲区的内容去填充*/ 
	printf("%d $%.2f  %s\n",age,assets,pet); 
return 0;
 } 
