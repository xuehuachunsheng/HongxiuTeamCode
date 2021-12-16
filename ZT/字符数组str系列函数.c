#include<stdio.h>
#include<string.h>//strlen(s)输出字符串长度（不计算\0）,strcmp(字符串1,字符串2) 
int main(void)
{
char s[12]="a book!"; 
printf("%d",sizeof(s)); 
	
	return 0;
}/*字符串长度函数：strlen(s)输出字符串长度（不计算\0）,strcmp(字符串1,字符串2
字符串比较函数：strcmp(字符串1,字符串2){ASCII值比较}比较第一个不同的字符，ascii值大的就大，返回函数值 
字符串连接函数：strcat(字符数组1,字符串2)
字符串拷贝函数：strcpy(字符数组1,字符数组2) 把数组2替换到数组1中 eg：char a[10]="abcdefghi"，b[]="happy"；  strcpy(a,b)； 把b替换a后为 a[10]="happy\0ghi\0"  b不变*/ 
