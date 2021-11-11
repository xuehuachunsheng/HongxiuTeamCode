//#include<stdio.h>
//int main()
//{
//	int a[50]={0},i;
//	printf("输入50个整数:");
//	for(i=0;i<2;i++)
//	{
//		scanf("%d",&a[i]);
//	 } 
//	for(i=1;i<=50;i++)
//	{
//		if(i%10==0)
//		{
//			printf("%3d\n",);
//			//continue;
//		 } 
//		printf("%3d",a[i-1]);		 
//	}
//	return 0;
// } 
#include<stdio.h>
int main()
{
	int a[50]={0},i;
	printf("输入50个整数:");
	for(i=0;i<50;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=1;i<=50;i++)
	{
		if(i%10==0&&i<49)
		{
			printf("%3d\n",a[i++-1]);
			//continue;
		} 
		printf("%3d",a[i-1]);		 
	}
	return 0;
 }
