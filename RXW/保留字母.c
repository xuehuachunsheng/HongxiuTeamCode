#include<stdio.h>
#include<string.h>
#define M 80
int main(void)
{
	int i,j,n,b;
	char a[M];
	scanf("%s",a);
	j=sizeof(a)/sizeof(a[0]);
	for(i=0;i<j;i++)
	{
		n=i;
		if(a[i]<65&&a[i]>122)
		{
			for(i;i<j;i++)
			{
				a[i]=a[i+1];
			}
			b++;
		}
		i=n;
	}
	for(i=0;i<j-b;i++)
	{
		printf("%c",a[i]);
	}
	return 0; 
}
