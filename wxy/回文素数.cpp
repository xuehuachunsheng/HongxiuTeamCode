#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=10;i<=1000;i++)
	{
		for(j=2;j<=i;j++){
			if(i%j==0)
			break;
		}
		if(i==j)
		{
			if(i>=11&&i<=99)
			{
				if(i/10==i%10)
				{
					printf("%d ",i);
					k++;
				}
			 } 
			 else if(i>=101&&i<=999)
			 {
			 	if(i/100==i%10)
				 {
			 	printf("%d ",i);
			 	k++;
			     }
			 }
			 if(k==5)
			 {
			 	printf("\n");
			 	k=0;
			 }
		}
	}
	return 0;
}
