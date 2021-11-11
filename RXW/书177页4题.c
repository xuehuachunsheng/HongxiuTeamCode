#include<stdio.h>
#include<string.h>
#define M 26
int main(void)
{
	char a[100];
	int b[M]={0},i,j;
	gets(a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		b[a[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
		{
			printf("%c %d\n",i+'a',b[i]);
		}
	}
	return 0;
}
