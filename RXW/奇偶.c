#include<stdio.h>
#define M 10
int main(void)
{
	int a[M]={23,21,54,364,9,26,95,1,6,33};
	int b[M]={0};
	int i,d=0,e=9;
	for(i=0;i<M;i++)
	{
		if(a[i]%2==0)//Å¼Êý 
		{
			b[d]=a[i];
			d=++d;
		}
		else//ÆæÊý 
		{
			b[e]=a[i];
			e=--e;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
