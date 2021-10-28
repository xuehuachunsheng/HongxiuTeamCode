#include<stdio.h>
int main()
{
	int a,sum=0;
	for(a=100;a<=2000;a++)
	{
	if(a%3==0)
	sum=sum+a;
	if(sum>1000)break;	
	}
	printf("%d",sum);
	return 0;
}
