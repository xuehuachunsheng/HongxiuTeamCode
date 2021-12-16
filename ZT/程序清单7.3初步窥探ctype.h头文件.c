//替换输入的字母，非字母字符保持不变
#include<stdio.h>
#include<ctype.h>//ctype函数   
int main(void)
{
	char ch;
	
	while((ch=getchar())!='\n')
	{
		if(isalpha(ch)) putchar(ch+1);
		else putchar(ch);
	}
	putchar(ch);
	return 0;
 } 
 
/*ctype.h函数库
isalnum（）  字母或数字
isalpha（） 字母
isblank（） 空白字符->空格，水平制表符或换行符
iscntrl（） 控制字符 如 ctrl+b
isdigit（） 数字
isgraph（） 除空格外的任意可打印字符
islower（） 小写字母
isprint（） 可打印字符
ispunct（） 标点符号->除空格或字母数字字符以外的任何可打印字符
isspace（） 空白字符->空格，换行符，换页符，回车符，垂直制表符，水平制表符
isupper（） 大写字母
isxdigit（） 十六进制字符 */
 
