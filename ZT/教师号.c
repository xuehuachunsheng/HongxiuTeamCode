#include<stdio.h>
#define N 10
int main(void)
{
	int i,j,t,array[N];
	for(i=0;i<N;i++)
	{
	printf("请输入第%d个元素：",i+1);
	scanf("%d",&t);
	for(j=0;j<i;j++)
	  {
	  	if(array[j]==t)
		{   
	  	printf("元素已存在，重新输入：");
		scanf("%d",&t);
		j=-1; 
		}
	  } 
	  array[i]=t; 
	}
	return 0;
 } 
