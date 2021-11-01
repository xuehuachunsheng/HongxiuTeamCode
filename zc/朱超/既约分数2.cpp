#include<stdio.h>
int main()
{
	int i,j;
	int k,t=0,x=0;
	for(i=1;i<=2020;i++)
	{
		for(j=1;j<=2020;j++)
		{
			k=1;
			for(;k!=0;)
			{	i>j?t=j:t=i;
				i>j?i=i%j,k=i:j=j%i,k=j;
				if(k==0)
				continue;
			
			}
			if(t==1)
			x++;
		}
	}
	printf("%d",x);
 } 
