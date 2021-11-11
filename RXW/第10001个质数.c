#include<stdio.h>
int main(void)
{
	int a,b,c=0,d;
	for(a=2;;a++)
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0)
			{
				break; 
			}
		}
		if(b==a)
		{
			c++;
		}
		if(c==10001)
		{
			printf("%d",a);
			break;
		}
	}
	return 0;
}
