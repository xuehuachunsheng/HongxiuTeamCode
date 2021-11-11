#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={};
	int b,i,c;
	gets(a);
	b=strlen(a);//changdu
	for(i=0;i<b;i++)
	{
		c=a[i];
		a[i]=c+2;
	}
	for(i=0;i<b;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}

