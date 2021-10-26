#include<stdio.h>
#include<math.h>
int main()
{
	int m,i,k;
	scanf("%d",&m);
	k=sqrt(m);
	for(i=2;i<=k;i++)
	{
		if(m%i==0)   
		// 判断会不会整除，余数为0自然不止两个因子 
		{
			break;
		}
	}
		if(i>k)
		{
			printf("%d is a prime number\n",m);
		}
		else
		{
			printf("%d is not a prime number\n",m);
		}
	return 0;
}
