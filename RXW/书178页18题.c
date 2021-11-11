#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0},b[100]={0},c[100]={0};
	int d,e,i,j;
	gets(a);
	gets(b);
	d=strlen(a);
	e=strlen(b);
	for(i=0;i<d;i++)
	{
		c[i]=a[i];
	}
	for(i=d,j=0;i<d+e;i++,j++)
	{
		c[i]=b[j];
	}
	for(i=0;i<d+e;i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
