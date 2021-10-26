#include<stdio.h>
int main()
{
	int b1,b2,b3,b4,b5;
	long x;
	scanf("%d",&x);
	b5=x/10000;
	for(b4=x;b4>10000;b4=b4%10)
	{
	  b4=b4/1000;
    }
	for(b3=x/10;b3<10000&&b3>1000;b3=b3-1000)
	{
	  b3=b3/100;
    }
	for(b2=x;b2<100;b2-100)
	{
	  b2=b2/10;
	}
	for(b1=x;b1<10;b1-10);
	printf("the number is x\n",x);
	printf("its bit is:%d,%d,%d,%d,%d\n",b5,b4,b3,b2,b1);
	return 0;
}
