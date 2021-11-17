#include<stdio.h>
int main(void)
{
	int n;
	
	printf("please enter three integers:\n");
	scanf("%*d %*d %d",&n);
	printf("The last integer was %d\n",n); 
return 0;
 }//在scanf中 *的意思是跳过该选项，把n的值赋予下一项，如果下一项任有*就依次传递下去
  
