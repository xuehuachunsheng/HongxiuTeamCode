#include<stdio.h>
int main()
{
	int a=3,b=4,c=1,max,t;
	if(a>b&&a>c)
	{
		max=a; 
	}
	else
	{
		max=0;
	} 
	t=(a+3,b+1,++c);
	printf("max=%d,t=%d\n",max,t);
	return 0;
}
