#include<stdio.h>
#include<math.h>
int main()
{
	int m,i,k;
	int n=0;
	for(m=2;m<100;m++)
	{
		k=sqrt(m);
		for(i=2;i<=k;i++)
		{
			if(m%i==0)
			{
				break;
			}
		}
		if(i>k)
		{
			printf("%5d",m);
			n++;
			if(n%10==0)
			{
				printf("\n");
			}
		}
	}
	printf("\n100以内共有%d个素数。");
	return 0;
}
