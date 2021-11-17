#include<stdio.h>
#define  H  4
#define  L  4
int main(void)
{
	int  n,i,j,sum1=0,sum2=0;//i控制行，j控制列 
	int a[H][L];
	
	for(i=0;i<4;i++)
	 for(j=0;j<4;j++)
	  scanf("%d",&a[i][j]);
	for(i=0;i<4;i++)
	{
	  for(j=0;j<4;j++)
	 {
	 printf("%4d",a[i][j]);
	 if(i==j) sum1+=a[i][j];
	 if(i==3-j) sum2+=a[i][j];
	 }
	 printf("\n");
	  
	} 
	 printf("sum2=%d",sum2); 
	 printf("         sum1=%d",sum1);
	 
	return 0;
 } 
