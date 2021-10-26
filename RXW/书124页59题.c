#include<stdio.h>
int main()
{
	int x=3;
	do
	{
		printf("%3d",x-=2);
	}
	while(!(--x));
}
