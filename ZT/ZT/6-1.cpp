#include<stdio.h>
#define N 10
int main()
{
	int i;
	static int array[N];
	for(i=0;i<N;i++)
	{
		if((i+1)%6==0)
		printf("\n");
		printf("%5d",array[i]);
	}
	printf("\n");
	return 0;
}
