#include<stdio.h>//判断是否为素数 
#include<math.h> 
int main()
{
	int i,m;//k为m的平方根，m为判断数
	float k;
	scanf("%d",&m);
	k=sqrt(m); 
for(i=2;i<=k;i++)
{
   if(m%i==0) 
   {
   printf("%d不是素数",m); break;/*如果是非素数，就打印不是素数，然后跳出for 
   去判断if*/ 
   } 
}
	if(i>k) printf("%d是素数",m);/*如果是非素数，判断为0,不打印*/ 

//printf("%d不是素数",m);
	return 0;
}
