#include<stdio.h>
#define N 14
int main()
{
	int i=0;
	char c[N];
	c[0]='G';
	c[1]='o';
	c[2]=' ';
	c[3]='{';
	for(i;i<=13;i++)
	{
		printf("%-3c\a",c[i]);
	}
	return 0;
}
