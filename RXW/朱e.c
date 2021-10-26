#include<stdio.h>
int main()
{
	float i,e=0,j=1;
	for(i=1;i>0;i++)
	{
		j=j*i;
		if(j<1e5)
		{
			e=e+1/(j);			
		}
		else break;
	}
	printf("%.5f",e);
	return 0;
}

