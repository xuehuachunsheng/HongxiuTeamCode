#include<stdio.h>
int max=10;
int Max(int x,int y)
{
	int max=0;
	max=x>y?x:y;
	return max;
}

int main()
{
	int max;
	max=Max(100,200);
	printf("%d",max);
	return 0;
}
