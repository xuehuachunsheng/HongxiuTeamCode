#include<stdio.h>
#define N 10
int main()
{
	int array[N]={65,23,234,49,-239,0,34,54,-98,-3};
	int temp,i,j;
	printf("排列前数组的元素为：\n");
	for(i=0;i<N;i++)
		printf("%5d",array[i]);
	for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
	printf("\n排列后数组元素为：\n");
	for(i=0;i<N;i++)
		printf("%5d",array[i]);
	printf("\n");
	return 0;
}
