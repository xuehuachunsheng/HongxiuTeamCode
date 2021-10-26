#include<stdio.h>
#define N 81
int main(void)
{
	char str[N];
	char ch;
	int i,num=0,word=0;
	printf("请输入字符串：");
	gets(str);
	for(i=0;(ch=str[i])!='\0';i++)
	{
		if(ch==' ')
		{
			word=0;
		}
		else if(word==0)
		{
			word=1;
			num++;
		}
	}
	printf("有%d个单词在句子中.\n",num);
	return 0;
}
