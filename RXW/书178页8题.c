#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,m,n;
	gets(a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			n=a[i];
			n=n+32;
			a[i]=n;
		}
		else
		{
			n=a[i];
			n=n-32;
			a[i]=n;
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
