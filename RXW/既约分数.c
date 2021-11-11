#include<stdio.h>
int main()
{
	int i=1,j=1,t,a=0;
	int m,n;
	for(i;i<=2020;i++)
	{
		
		for(j;j<=2020;j++)
		{
			if(i<j)
			{
				t=i;
				i=j;
				j=t; 
			}
			while(t!=0)
			{
				t=i%j;
				i=j;
				j=t;
			}
			if(i==1)
			{
				a=++a;
			}
		}
	}
	printf("%d",a);
}
