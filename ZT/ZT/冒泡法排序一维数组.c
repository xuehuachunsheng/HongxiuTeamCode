#include<stdio.h>//一维数组的冒泡排序法 
#define N 10
int main(void)
{
	int a[N]={65,24,58,178,190,237,-121,0,165,6};
	int temp,i,j;//temp用于临时的交换变量
	 
	for(i=0;i<N-1;i++)//一共有N个数，两两比较即两两打包，当进行到N-1时，打包结束
					 //这个for是判定循环进行多少轮 
	 for(j=0;j<N-i-1;j++)//每轮循环进行多少次的比较，因为每一轮的i都在递增，同时i
	                    //每递增一轮，就固定一个数，所以j的比较次数也在减少 
	  if(a[j]>a[j+1]) //i控制循环的躺数，j为数组元素 
	  {
	  	temp=a[j]; 
	  	a[j]=a[j+1];
	  	a[j+1]=temp;
	  }
	for(j=0;j<N;j++) 
	printf("%5d",a[j]);
 
	return 0;
 } 
