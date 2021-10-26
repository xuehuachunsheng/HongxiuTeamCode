#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	double s;
	for(n=1;n<=9;n++)
	{
		i=0;
		s=0;
		for(j=0;j<n;j++)
		{
			i=i+n*pow(10,j);
			printf("%d",i);
			if(j!=n-1)
			printf("+");
			s+=i;
		}
		printf("=%.0f\n",s);
	}
 } 
