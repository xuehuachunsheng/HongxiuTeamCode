#include<stdio.h>
int main()
{
	int m=0;
	int n=5;
	int i,j,k;
	for(i=0;i<=5;i++)
	for(j=0;j<=10;j++)
	for(k=0;k<=50;k++)
	if(i+j*0.5+k*0.1==n)
	{
		printf("一元%d张，五角%d张，一角%d张\n",i,j,k);
		m++;
	}
	printf("一共有%d种方法",m);
	return 0;
}
