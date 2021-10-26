#include<stdio.h>
int main()
{
	printf("please input a number");
	scanf("%f",&x);
	printf("%d",fabs(x-5)>1e-6);
	return 0;
}
