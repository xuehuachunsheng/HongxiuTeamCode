#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<=1000;x++)
	{
		if(x%2)
		{
			printf("这个奇数是%d\n",x);
		}
		else
		{
			printf("这个偶数是%d\n",x);
		}
	}
	return 0;
}
