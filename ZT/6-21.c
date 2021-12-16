#include<stdio.h>//空格和/0不是一个东西，所以可以利用空格统计单词的个数 
#define N 81
int main()
{
	char a[N];
	int i,num=0,word=0;
	
	gets(a);
	for(i=0;a[i]!='\0';i++)
	 {                                       //代码解析 
	 if(a[i]==' ') word=0;//寻找数组元素，如果某位置元素为空格，则word为0,   
	else if(word==0) /* else a[i]!=' '&&word==0,  else==寻找元素，直到a[i]不是空格
	，同时，还要让它前面存在空格，而前面存在空格的条件就是word==0*/ 
	 {
	  word=1;//赋值非0给word，便于循环中找到空格后把0再赋值给word，然后执行判断语句 
	  num++;//满足判断条件，num++; 
	 }
	 }
	printf("it has %d words ",num);
	return 0;
}
