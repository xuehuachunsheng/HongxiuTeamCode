#include<stdio.h>
int main(void)
{
	int i,j,x=7;
	char ch;
	for(i=1;i<=4;i++)//依次行 
	{
		ch='A';
		for(j=1;j<i*2;j++)//依次输出一个空格斜坡 
		{
			printf(" ");
		}
		for(j=1;j<=x;j++)//按照每行字母个数进行循环 
		{
			printf("%2c",ch);
			ch++;
		}
		x=x-2;
		printf("\n");
	}
	return 0;
}

