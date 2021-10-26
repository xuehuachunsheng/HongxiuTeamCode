#include<stdio.h>
void swap(int x,int y)
{
	int t;
	printf("swap before:x=%d,y=%d\n",x,y);
	t=x;
	x=y;
	y=t;
	printf("swap after:x=%d,y=%d\n",x,y);
	return;
}

int main()
{
	int x,y;
	printf("input x,y:");
	scanf("x=%d,y=%d",&x,&y);
	swap(x,y);
	printf("\n output :x=%d,y=%d\n",x,y);
	return 0;
}
