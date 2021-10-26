#include<stdio.h>
int main()
{
	int day;
	int x1=1,x2;
	for(day=9;day>0;day--)
	{
		x2=(x1+1)*2;
		x1=x2;
	}
	printf("%d",x2);
}
