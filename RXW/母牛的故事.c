#include<stdio.h>
int main()
{
	int a1=1,a2=2,a3=3,a4=4;
	int n,i;
	scanf("%d",&n);
	if(n<=4)
	{
		for(i=0;n>0;n--)
		{
			i++;
		}
	}
	if(n>4)
	{
		for(i=0;n>4;n--)
	{
		i=a1+a2+a3;
		a1=a2;
		a2=a3;
		a3=a4;
		a4=i; 
		if(n<4)
		{
			return 0;
		}
	}	
	}

	if(i==0)
	return 0;
	printf("%d",i); 
	return 0;
}

