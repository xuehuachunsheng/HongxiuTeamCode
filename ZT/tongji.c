#include<stdio.h>
int main()
{
	int spa=0,zm=0,num=0,oth=0;
	char s[80];
	char ch;
	
	while((ch=getchar())!='\n')
	{
		if(ch==' ') spa++;
		else if (ch>='a'&&ch<='z') zm++;
		else if (ch>='0'&&ch<='9') num++;
		else oth++;
	}
	printf("sp=%d,zm=%d,num=%d,oth=%d",spa,zm,num,oth);
	return 0;
}
