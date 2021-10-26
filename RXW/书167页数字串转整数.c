#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[20];
	int i,n,sign;
	i=0;
	scanf("%s",s);
	sign=(s[i]=='-')?-1:1;
	if(s[i]=='+'||s[i]=='-')
	{
		i++;
	}
	for(n=0;s[i]>='0'&&s[i]<='9';i++)
	{
		n=10*n+s[i]-'0';
	}
	printf("½á¹ûÊÇ£º%d\n",n*sign);
	return 0;
}
