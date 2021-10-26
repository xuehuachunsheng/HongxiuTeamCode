#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[50],s1[50],s2[50],s3[50];
	printf("请输入三个字符串：\n");
	gets(s1);
	gets(s2);
	gets(s3);
	if(strcmp(s1,s2)>0)
	{
		strcpy(s,s1);
		strcpy(s1,s2);
		strcpy(s2,s);
	}
	if(strcmp(s1,s3)>0)
	{
		strcpy(s,s1);
		strcpy(s1,s3);
		strcpy(s3,s);
	}
	if(strcmp(s2,s3)>0)
	{
		strcpy(s,s2);
		strcpy(s2,s3);
		strcpy(s3,s);
	}
	printf("\n三个字符串由小到大是：\n%s\n%s\n%s",s1,s2,s3);
	return 0;
}
