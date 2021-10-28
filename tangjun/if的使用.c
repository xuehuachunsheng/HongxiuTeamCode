#include<stdio.h>
int main()
{
	int a;
	printf("please input a num:");
	scanf("%d",&a);
	if(a%5)       /*0ÊÇ¼Ù£¬Ö´ÐÐelse*/ 
	{
		break;
		puts("the num can not divide five.");
	}
	else
	{
		puts("the num can divide five.");
	}
	return 0;
}
