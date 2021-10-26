#include<stdio.h>
int main()
{
	int s;
	printf("输入一个年份:");
	scanf("%d",&s);
   	if(s%4==0)
   	{
   		if(s%100!=0||s%400==0)
			printf("%d为闰年",s);
		else
		{
			printf("不是闰年"); 
		}
	}
	else
		printf("%d不为闰年",s);
	return 0;
}

