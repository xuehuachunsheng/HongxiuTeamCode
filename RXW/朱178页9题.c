#include<stdio.h>
#include<string.h>
#define M 5000
int main()
{
	char a[100];
	gets(a);//a是全字符串 
	int j=strlen(a);//读取长度 
	int m,i;
	printf("请输入从第几个字符开始替换！\n");
	scanf("%d",&m);//序号 
	int k=j-m;//开始替换 
	printf("请输入替换的%d个字符!",k);
	char b[M];
	gets(b);
	char c[100];
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	strcat(c,b);//连接 
	puts(c);//c 是替换后 
//	puts(a);
	return 0;
}
