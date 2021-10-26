#include<stdio.h>
int main (void)
{
	int b1,b2,b3,b4,b5;
	int x;
    scanf("%d",&x);
	b5=(x/10000);
	b4=(x/1000)%10+1;
	b3=b4--;
	b2=(x/10)%10;
	b1=x%10;
	printf("the number is %d\n",x);
	printf("its bit is:%d,%d,%d,%d,%d\n",b5,b4,b3,b2,b1);
	return 0;
}
