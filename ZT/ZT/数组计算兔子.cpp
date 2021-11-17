#include<stdio.h> //利用数组求兔纸的个数
int main(void)
{
	int j,i,a[20]={1,1},sum=0; 
	printf("%10d%10d",1,1);
	for(i=2;i<20;i++)
	{
	a[i]=a[i-1]+a[i-2];
	sum+=a[i];
	printf("%10d",a[i]);
	if((i+1)%5==0) printf("\n");
	}
	
	printf("\nsum=%-10d",sum);
	return 0;
 } 
