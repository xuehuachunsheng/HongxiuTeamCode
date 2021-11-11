#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[]="*******";
	for(i=0;i<4;i++)
	{
		printf("%s\n",str1);
		str1[i]=' ';
		str1[strlen(str1)-1]='\0';
	}
}
