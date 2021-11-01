#include<stdio.h>
int main()
{
	int n,a,i;
	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			break;
		}
		if(i==a)
		printf("%d\n",a);
	}
	return 0;
 } 
