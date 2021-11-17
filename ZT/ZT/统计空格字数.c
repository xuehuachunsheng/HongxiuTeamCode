#include<stdio.h>//空格和/0不是一个东西，所以可以利用这一点 
#define N 81
int main()
{
	char a[N];
	int i,num=0;
	
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ') num++;
	}
	printf("%d",num);
	return 0;
}
