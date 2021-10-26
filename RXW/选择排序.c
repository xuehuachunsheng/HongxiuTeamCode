//#include<stdio.h>
//#define M 10
//int main(void)
//{
//	int array[M];
//	int i,j,a;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&array[i]);
//	}
//	for(j=0;j<11;j++)
//		for(i=0;i<10;i++)
//		{
//			if(array[i]>array[i+1])
//			{
//				a=array[i+1];
//				array[i+1]=array[i];
//				array[i]=a;
//			}
//		}
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",array[i]);
//	}
//	return 0;
//}
#include<stdio.h>
#define M 10
int main(void)
{
	int array[M];
	int i,j,a;
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<10;j++)
		for(i=0;i<10;i++)
		{
			if(array[j]<array[i])
			{
				a=array[j];
				array[j]=array[i];
				array[i]=a;
			}
		}
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}

