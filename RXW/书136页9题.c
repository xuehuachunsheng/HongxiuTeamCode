#include<stdio.h>
int main()
{
	int a,i;
	for(i=100;i<2000;++i)
	{
		if(i%3==0)
		{
			a=a+i;
		}
		else if(a>1000)
		{
			break;
		}
	}
	printf("%d",a);
	return 0;
} 
