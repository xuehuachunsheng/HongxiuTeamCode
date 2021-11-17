#include<stdio.h>
#include<string.h>//h>g   m>b 
int main(void)
{
	char s[50],s1[50],s2[50],s3[50];//s为空间变量，用于调换位置 
	gets(s1);//hello
	gets(s2);//good bye
	gets(s3);//good morning
	 
	if(strcmp(s1,s2)>0)//如果第一个字符＞第二个字符 
	{
	 strcpy(s,s1);//s=hello
	 strcpy(s1,s2);//s1=s2=good bey
	 strcpy(s2,s); //s2=hello\0ye strcpy会把空字符\0拷贝过去，当我们输出时，遇到\0后停止输出，故后面的ye不输出 
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
	printf("%s\n%s\n%s\n",s1,s2,s3);
	return 0;
 } 
