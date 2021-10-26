#include<stdio.h>
#define N 10
int main()
{
	int x,i,location;
	scanf("%d",&x);
	int array[N]={-65,0,21,58,67,79,92,99,102};
	printf("插入前：\n");
	for(i=0;i<N-1;i++)
	{
		printf("%5d",array[i]);
	}
	printf("\n");
	if(x>=array[8])
	{
		array[9]=x;
	}
	else
	{
		for(i=0;i<9;i++)
		{
			if(array[i]>=x)
			//判断排在哪里 
			{
				location=i;
				break;
			}
		}
		for(i=N-1;i>location;i--)
		//依次移动数组对应的数字 
		{
			array[i]=array[i-1];
		}
		array[location]=x;
	}
	printf("插入后：\n");
	for(i=0;i<N;i++)
	{
		printf("%5d",array[i]);
	}
	printf("\n");
	return 0;
}
