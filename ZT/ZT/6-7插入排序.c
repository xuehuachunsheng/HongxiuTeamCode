#include<stdio.h>
#define N 10  
int main(void)
{
	int x=88,i,lct;
	int a[N]={-65,0,21,58,78,90,98,106,124};
	printf("插入前：\n");
	for(i=0;i<N-1;i++)
	  printf("%5d",a[i]);
	 printf("\n");
	 if(x>=a[8]) 
	 {
	 	a[9]=x;
	  }
	 else 
	 {
	 	for(i=0;i<9;i++)
	 	{
		 if(a[i]>=x)
		 {
		 lct=i;
		 break; 
		 } 
		 }
		for(i=N-1;i>lct;i--)
		{
		  a[i]=a[i-1]; 
		 a[lct]=x;
		 } 
		printf("插入后：\n");
		for(i=0;i<N;i++)
		printf("%5d",a[i]);
		printf("\n");  
	 }
return 0;
 } 
