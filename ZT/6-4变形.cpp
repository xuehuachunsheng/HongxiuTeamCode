#include<stdio.h>
#define N 10 
int main()
{
	int array[10]={12,11,8,7,6,5,4,3,2,1};
	int max=array[0];//定义最大值为第一个数 
	int location=0,i;//把元素的初始位置定义为0 
	for(i=0;i<N;i++)//??为什么这里i=1而下面的i=0？？ 
	{
		if(max<array[i])
		{
		max=array[i];
		location=i;
		}
	}/*本循环i=0或者i=1对结果没有什么影响，次循环的意思时 我们开始从哪一个开始和max做对比，
	 当i=0时，则从第一个数开始和max作对比，但是我们的max就是第一个数；当i=1时，我们从第二个数开始
	 和max做比较，所以理论上没有多大影响*/ 
	for(i=0;i<N;i++)/*问题：虽然运算结果无误，但当i=1时 第一个元素消失了，
	当i=0时，第一个元素又显示出来了???   回答：虽然i=0，但是array[0]为1，则从第一个数开始显示
	如果i=1 那么array[i]为2，所以从第二个元素开始显示，故这个循环需要i=0*/ 
	printf("%5d",array[i]);//显示元素的位置和输出个数 
	printf("\n");
	printf("最大值为:%d，是数组中的第%d个元素\n",max,location+1);
	return 0;
	
 }
