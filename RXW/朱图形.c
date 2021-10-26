#include<stdio.h>
int main()
{
	int a,b;
	int s=1,d=9;
	for(b=1;b<=9;b++)
	{
		for(a=1;a<=9;a++)
		{
			if(a==s||a==d)
			{
				printf("  ");
			}
			else
			{
				printf("* ");
			}
		}
		s++,d--;
		printf("\n");		
	}
return 0;
}

