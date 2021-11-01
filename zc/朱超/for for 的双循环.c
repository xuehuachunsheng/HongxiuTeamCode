#include<stdio.h>
int main()
{
int i,j;//i控制行数位于第一重循环，j控制列数位于第二重循环
for(i=1;i<=9;i++)//i控制外循环 
{
	for(j=1;j<=i;j++)//j控制内循环 
	{
	 printf("%d*%d=%-3d",i,j,i*j); 
	} 
	printf("\n");
 } 
return 0;
 } 
