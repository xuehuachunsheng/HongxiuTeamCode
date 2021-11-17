#include<stdio.h>
int main()
{
	int i,sum=0;
	
	for(i=100;sum<=1000;i++)
	 if(i%3==0)  
	   sum+=i;
	 
	printf("%d",sum);
	return 0;
 } 
