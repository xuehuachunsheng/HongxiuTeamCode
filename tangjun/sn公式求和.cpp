#include<stdio.h>
int main()
{
	int i,count=0;
	for(i=10000;i<=50000;i++)
	{
		if(i/10000==i%10&&i/1000%10==i/10%10)
		{count++;
		printf("%7d",i);
		
		if(count%5==0)
		printf("\n");
		}	
	}
	printf("%4lf",i);
	return 0;
}

