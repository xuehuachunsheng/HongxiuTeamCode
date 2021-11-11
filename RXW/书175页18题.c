#include<stdio.h>
#include<string.h>
int main()
{
	char a[10][80],c[80];
	int i,j,k;
	for(i=0;i<10;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<9;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
		{
			if(strcmp(a[j],a[k])<0)
			{
				k=j;
			}
		}
		if(k!=i)
		{
			strcpy(c,a[i]);
			strcpy(a[i],a[k]);
			strcpy(a[k],c);
		}
	}
	for(i=0;i<10;i++)
	{
		puts(a[i]);
	}
	return 0;
}







