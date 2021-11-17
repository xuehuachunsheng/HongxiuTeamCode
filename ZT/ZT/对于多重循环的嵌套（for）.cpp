#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=9;i++)
 { 
  for(j=1;j<=i;j++)
  {
  printf("%d*%d=%-3d",j,i,i*j);
  //j++位于本位置
  } 
  printf("\n");/*逐个判断内层条件，不满足时跳出内层，重新判断外层并选择是否再次执行
  内层条件,若需要执行内层条件，则将内层条件重新执行*/ 
  //i++位于本位置 
 }
return 0;
 } 
