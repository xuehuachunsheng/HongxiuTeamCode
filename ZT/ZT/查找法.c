#include<stdio.h>
#define N  10
int main(void)
{
	int a[N]={65,24,58,178,190,237,-121,0,165,6};
	int i,n,pd=0;//pd为判断条件 
	
	scanf("%d",&n); 
	for(i=0;i<N;i++)
	 if(a[i]==n) 
	   {
	   	pd=1; 
	   break;}
	if(pd==1) printf("找到了该数，位于第%d号位",i+1);
	else printf("未找到该数"); 
	return 0;
}
