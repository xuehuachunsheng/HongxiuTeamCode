#include<stdio.h>
#include<math.h>
int main()
{
	int m,i,k,flag;
	scanf("%d",&m);
	k=sqrt(m);
	flag=1;
	for(i=1;i<=k;i++)
	{
		if(m%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is a prime number\n",m); 
	}
	else
	{
		printf("%d is not a prime number\n",m);
	}
	return 0;
}
