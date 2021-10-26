#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n;
	n=0;
	double S;
	printf("一共有5元人民币，兑换方法有:\n"); 
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=10;j++)
		{
		
			for(k=0;k<=50;k++)
			{
			    S=i+j*0.5+k*0.1;
				if(S==5)
				{
					printf("需要%d个一元,需要%d个5角,需要%d个一角.\n",i,j,k); 
				}
			}
		}
		n=n+(j-2*i);
	 }   
	 printf("一共有%d种方法",n);
	 return 0; 
 }

