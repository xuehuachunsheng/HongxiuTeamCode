#include<stdio.h>
#define NUM 5
int main()
{
	int i;
	int array[NUM];
	for(i=0;i<NUM;i++)
	{
		array[i]=i*2;
		printf("array[%d]=%d\n",i,array[i]); 
	}
	return 0;
 } 
