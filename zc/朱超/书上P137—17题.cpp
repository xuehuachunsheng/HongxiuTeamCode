#include<stdio.h>
int main()
{
	long int i,j;
	long int t=0;
	long int k,l;
	long int s=0,m=1;
	for(i=1;i<=9;i++)
	{
		s=i,t=0,m=1;
		for(j=i,k=i;j>0;j--)
		{
			printf("%d",s);
			t=t+s;
			k=k-1;
			if(k>0)
			{
				printf("+");	
			}
			
	         m=m*10;
	         s=s+m*i;
	         

		}
		printf("=%d",t);
					printf("\n");
	}

	return 0;
}
