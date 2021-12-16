#include<stdio.h>//评委打分系统； 
#define N 5//N 为同学的个数 
#define M 6//M为评委的打分 
int main(void)
{
	int a[M];//定义一个数组 
	int i,j,n,max,min,temp,sum=0,k;//i,j,k,n分别用于循环变量，temp为临时储存量 
		
	for(k=0;k<N;k++)//k用于循环同学个数 
	{
	printf("请评委输入第%d个同学的成绩：",k+1); 
	for(n=0;n<M;n++)//n循环每个同学的打分情况 
	scanf("%d",&a[n]);//scanf存入的是具体元素的位置：存入元素a[i],而不是数组a[M]  
	max=min=a[0];//先输入后再定义max和min 
	for(j=0;j<M;j++)//用于循环判断出最大最小值，同时进行累加求和 
	{
	 sum+=a[j];
	if(a[j]>max) max=a[j];
	if(a[j]<min) min=a[j]; 
	}
//	printf("  max=%d",max);
//	printf("\nmin=%d",min);
//	printf("\nsum=%d",sum);//到此无误 
	//以下已经修改，选择了冒泡排序法 
	printf("该同学的分数由小到大分别为：");
	for(i=0;i<M-1;i++)//i用于冒泡排序的循环趟数 
	 for(j=0;j<M-1-i;j++)//j用于每趟冒泡排序的循环次数 
	  if(a[j]>a[j+1])//判定两个数的大小 
	  {
	  	temp=a[j];
	  	a[j]=a[j+1];
	  	a[j+1]=temp;   	
	   } 
	for(j=0;j<M;j++)//另起循环定义为0，用于输出数组元素 
	printf("%-4d",a[j]); 
	printf("\n"); 
	printf("该同学去掉最高分和最低分后最终成绩为%.2f\n",(sum-max-min)/(M-2.0));  	
	} 
	return 0;
 } 
