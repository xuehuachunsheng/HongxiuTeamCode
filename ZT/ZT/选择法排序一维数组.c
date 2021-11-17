#include<stdio.h>//排序法进行数组中元素的排序 
#define N 10 
int main(void) 
{
	int a[N]={65,24,58,178,190,237,-121,0,165,6};
	int i,j,temp;
	
	for(i=0;i<N-1;i++)//i任然控制循环进行多次躺 ； 
	 for(j=i+1;j<N;j++)//内循环进行N-1次，其次，是a[i]和a{i+1}之后的进行比较，故j的初始值为i+1； 
	  if(a[i]>a[j])
	  {
	  	temp=a[i]; 
	  	a[i]=a[j];
	  	a[j]=temp;//选择法是小数上升锁定，冒泡法是大数下沉锁定 
	   } 
	   for(i=0;i<N;i++)
	   printf("%5d",a[i]); 
	return 0;
}
