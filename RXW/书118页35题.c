#include<stdio.h>
int main()
{
	int x=3,y=6,a=0;
	while(x++!=(y-=1))
	{
		a+=1;
		if(y<x)
		break;
	}
	printf("x=%d,y=%d,a=%d\n",x,y,a);
	return 0;
}
