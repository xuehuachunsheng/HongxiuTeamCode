#include<stdio.h>
int main()
{
	int a[10]={0};
	int d[10]={0};
	int i,j,b,c;
	printf("请输入10个1~99的数\n");
	for(i=0;i<10;i++)//获取十个数 
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		b=a[i]%10;//获得个位数 
		d[b]++;
	}
	for(i=0;i<10;i++)//输出 
	{
		if(d[i]!=0)
		{
			printf("%d有%d个\n",i,d[i]);
		}
	}
	return 0;
}
