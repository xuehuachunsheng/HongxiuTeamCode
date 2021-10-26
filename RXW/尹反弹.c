#include<stdio.h>
int main()
{
	int i;
	float h=100,a=100,sum=0;//h表示高度 
	for(i=1;i<=10;i++)
	{
		a=a/2;
		sum=sum+a*2;
	}
	sum=sum+100-2*a;
	printf("共经过%f\n",sum);
	printf("反弹%f\n",a);
	return 0;
}

