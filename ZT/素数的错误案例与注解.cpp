#include<stdio.h>//判断是否为素数 
#include<math.h> 
int main()
{
	int i,m;//k为m的平方根，m为判断数
	float k;
	scanf("%d",&m);
	k=sqrt(m); 
for(i=2;i<=k;i++)//利用for判断i<=k的情况 
   {
   if(m%i==0) 
    {
   printf("%d不是素数",m); break;//如果为非素数，打赢非素数，然后跳出循环 
    } 
   
	if(i>k) printf("%d是素数",m); /*这里i<=k，所以永远不会得到if(i>k）的
	情况，故这个素数的判断是永远不执行*/ 
}
//正确修改；把 if(i>k) printf("%d是素数",m);这个语句放到for的外面来判断即可 
//printf("%d不是素数",m);
	return 0;
}
