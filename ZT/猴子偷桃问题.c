//猴子偷桃，要求使用递归
#include<stdio.h>
int sum(int x);
int main()
{
	int peach;
	peach=sum(1);
	printf("%d",peach);	 
	
	return 0;
 } 
 
 int sum(int x)
 {
	if(x==7) return 1;
	else  return (sum(x+1)+1)*2;
 }
