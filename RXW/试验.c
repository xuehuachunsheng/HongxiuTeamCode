#include<stdio.h>
int main()
{
	int a,b;
	printf("ÇëÊäÈëÔÂÀûÈó£º");
	scanf("%d",&a);
	switch(a)
	{
		case a<=100000:printf("12");break;
		case a>100000:printf("13");break;
		default :printf("14");break;
	}
	return 0;
}
