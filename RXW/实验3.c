#include<stdio.h>
int main(void)
{
	int i,j,k,x=0;
	for(i=0;i<2;i++)
	{
		x++;
		for(j=0;j<3;j++)
		{
			if(j%2)
			{
				continue;
			}
			x++;
		}
		x++;
	}
	k=i+j;
	printf("k=%d,x=%d\n",k,x);
	return 0;
}
