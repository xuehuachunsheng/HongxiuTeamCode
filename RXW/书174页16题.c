#include<stdio.h>
int main()
{
	char s[80];
	int i;
	for(i=0;i<80;i++)
	{
		s[i]=getchar();
		if(s[i]=='\n')
		{
			break;
		}
	}
	s[i]='\0';
	i=0;
	while(s[i])
	{
		putchar(s[i++]);
	}
	putchar('\n');
 } 
