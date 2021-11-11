#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0};
	int b=0,i,c;
	gets(a);
	b=strlen(a);
	c=b-1;
	for(i=0;i<b;i++)
	{
		a[c+4]=a[c];
		c--;
	}
	for(i=0;i<b+4;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
