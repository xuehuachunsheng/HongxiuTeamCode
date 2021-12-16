#include<stdio.h>//比较三个字符串的大小 
#include<string.h>
int main()
{
	char  s_min[50],s1[50],s2[50],s3[50];
	gets(s1);
	gets(s2);
	gets(s3);
	if(strcmp(s1,s2)>0)
	 {
	 strcpy(s_min,s1);
	 strcpy(s1,s2);
	 strcpy(s2,s_min);	
	 }
	if(strcmp(s1,s3)>0)
	{
		strcpy(s_min,s1);
		strcpy(s1,s3);
		strcpy(s3,s_min);
	}
	if(strcmp(s2,s3)>0)
	{
		 strcpy(s_min,s2);
		 strcpy(s2,s3);
		 strcpy(s3,s_min);
	}
	puts(s1);
	puts(s2);
	puts(s3);  
	return 0;
}
