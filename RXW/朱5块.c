#include<stdio.h>
int main() 
{
	int i=5;
	float a,b,c;
	int m,n,k;
	int x=0;
	for(a=0;a<=i;a++)
	{
		for(b=0;b<=i;)	
		{
			for(c=0;c<=i;)	
			{
				if(a+b+c==i) 
				{
					m=a/1;
					n=b/0.5; 
					k=c/0.1;
					printf("%d %d %d\n",m,n,k);
					printf("%.1f ",c);
					x++;
				}
				c=c+0.1;
			}
			b=b+0.5;
		}
	}
	printf("%d",x);
	return 0;
}

