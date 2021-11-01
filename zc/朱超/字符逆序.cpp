#include<stdio.h>
int main()
{
	char str[100];
	gets(str);
	int i=0;
	while(str[i++]!='\0');
	for(int j=i-1-1;j>=0;j--)
	//printf("%c",str[j]);
	puts(str[j]);
}
