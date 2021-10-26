#include<stdio.h>
int main(void)
{
	int i=99,j,a=5;
LA:	
	for(i++;i<1000;i++)//依次输出所有三位数 
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0&&i>j)//判断不是素数 
			{
				goto LA;
			}
		}
		printf("%-5d",i);//输出素数 
		a=a+1;
		if(a%5==0)//五个一行 
		{
			printf("\n");
		}
	}
	return 0;
 } 
