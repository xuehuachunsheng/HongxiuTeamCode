#include<stdio.h>
int main() 
{
	int m=100,n=0;
	while(n<1000)
	{
		if(m%3==0)
		{
			n=n+m;
		}
		++m;
	}
	printf("%d",n);
	return 0;
}
