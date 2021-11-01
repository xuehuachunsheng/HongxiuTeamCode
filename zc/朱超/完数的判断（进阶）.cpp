#include<stdio.h>
int main()
{
	int n,m,i,t=0;
	scanf("%d",&n);
	while(n>0)
	{
		for(m=n/2;m>0;m--)
		{
			if(n%m==0)
			{
				t=t+m;
				if(t==n)
				{
					printf("%d its factors are ",n);
					for(i=1;i<n/2;i++)
					{
						if(n%i==0)
						printf("%d ",i);     
					}
					printf("\n"); 
				}
				
			}
		}
		t=0;
		printf("%d ",n);
		n--;	
	}

	return 0;
} 
