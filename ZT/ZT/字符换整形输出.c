#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i,n,sign;
	
	i=0;
	gets(a);
	sign=(a[0]=='-')?-1:1;
	if(a[0]=='-'||a[0]=='+') i++;
	for(n=0;a[i]>='0'&&a[i]<='9';i++)
	n=10*n+a[i]-'0';
	printf("%d",n*sign);       
	return 0;
}
