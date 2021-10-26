#include<stdio.h>
int main()
{
	long int x; 
	int b1,b2,b3;
	printf("please input three numbers:\n");
	scanf("%d",&x);
	if(100<=x&&x<=1000)
	{
	b3=(x/100)%10;
    b2=(x/10)%10;
    b1=(x/1)%10 ;
    printf("the number is%d",x);
    printf("its bit is:%d,%d,%d\n",b3,b2,b1);
	} 
    else if(10<=x&&x<=100)
    {
	b2=(x/10)%10;
    b1=(x/1)%10;
    printf("the number is%d",x);
    printf("its bit is:%d,%d\n",b2,b1);
    } 
    else
	{
	b1=(x/1)%10;
    printf("the number is%d",x);
    printf("its bit is:%d,%d\n",b1);
	}
	return 0;
}
