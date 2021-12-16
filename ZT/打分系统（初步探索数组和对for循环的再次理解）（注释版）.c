#include<stdio.h>//评委打分系统； 
#define N 5//N 为同学的个数 
#define M 6//M为评委的打分 
int main(void)
{
	int a[M]; 
	int i,j,n,max,min,temp,sum=0,k;
	float avr;
	
	for(k=0;k<N;k++)//同学个数 
	{
	printf("请评委输入第%d个同学的成绩：",k+1);//到此无误 
	for(n=0;n<M;n++)
	scanf("%d",&a[n]);//scanf存入的是具体元素的位置：存入元素a[i],而不是数组a[M]  
	max=min=a[0];
	for(j=0;j<M;j++)
	{
	 sum+=a[j];
	if(a[j]>max) max=a[j];
	if(a[j]<min) min=a[j]; 
	}
//	printf("  max=%d",max);
//	printf("\nmin=%d",min);
//	printf("\nsum=%d",sum);//到此无误 
	//以下需要修改，改为冒泡排序法 
	printf("该同学的分数由小到大分别为：");
	for(i=0;i<M-1;i++)
	 for(j=0;j<M-1-i;j++)
	  if(a[j]>a[j+1])
	  {
	  	temp=a[j];
	  	a[j]=a[j+1];
	  	a[j+1]=temp;   	
	   } 
	for(j=0;j<M;j++) 
	printf("%-4d",a[j]); 
	printf("\n"); 
	printf("该同学去掉最高分和最低分后最终成绩为%.2f\n",(sum-max-min)/(M-2.0));  	
	} 
	return 0;
 } 
