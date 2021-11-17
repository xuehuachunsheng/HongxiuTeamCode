#include<stdio.h>
#include<math.h>
int main()        
{
	int i,m,k,kt=1;//k为因式
	printf("11是回文素数\n"); 
	for(m=100;m<=1000;m++)
	{
	k=sqrt(m);
	for(i=2;i<=k;i++)//	
		if(m%i==0) break;
		  if(i>k&&m/100==m%10)
		  {
			printf("%d是回文素数",m);
			printf(" "); 
			if(kt%3==0) printf("\n");
		  	kt++;//统计个数 要放在一个语句里面，统计一个 自增一次 
		  	
			}
		  
	}
	printf("一共有%d个回文素数",kt);//最后在循环外面来统计个数 
	return 0; 
}
