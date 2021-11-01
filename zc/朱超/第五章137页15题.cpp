#include<stdio.h>
int main()
{
	int a,b,c,d,e=8;
	char m='A';
	for(c=1;c<5;c++)
	{
		e=e-1;
		for(d=1,b=c,m='A';d<=e;d++)
		{
		
			if(b==1)
			{
				printf("%c ",m);
				m++;
				
			}
			if(b>1) 
			{
				printf("  ");
				b--;
			}
		}
			printf("\n");
	}
	return 0;
 } 
