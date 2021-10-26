#include<stdio.h>
int main(void)
{
	int y=0,i;
	for(i=0;i<20;i++)
	{
		if(i%2==0)
		{
			continue;
			y+=i;
		}
	}
	return 0;
}
