#include<stdio.h>
int main()
{
	int h,m,h1;
	printf("enter a 24-hour time:");
	scanf("%d:%d",&h,&m);
	h1=h;	
	if(h>=13&&h<=23)
	{
		h=h-12;
	}
	else if(h=0)
	{
		h=12;
	}
	printf("Equivalen 12-hour time : %2d:%2d",h,m);
	if(h1>13&&h1<=23)
	{
		printf("PM");
	}
	else
	{
		printf("AM");
	}
	return 0;
}
