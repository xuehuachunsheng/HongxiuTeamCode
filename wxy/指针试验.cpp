#include<stdio.h>
int main()
{
	int array[10];
	int *p=array;
	int max,min,sum=0,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
	max=min=*p;
	for(i=0;i<10;i++)
	{
		if(max<*p+i) 
		max=*p+i;
		if(min>*p+i)
		min=*p+i;
		sum+=*p+i;
	}
	printf("sum=%d,max=%d,min=%d\n",sum,max,min);
	return 0;
 } 
