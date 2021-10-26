#include<stdio.h>
int main()
{
	int i,j,m=0,x=0,n=5;//n之所以赋值初始值为5是因为后面取余操作小于5不行 
	for(i=2;i<1000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				x=1;
			}
		}
		if(x==0)
		{
			printf("%-5d",i);//此处d前有-5是为了填5个字符格并且数字向左靠,这样才能输出的两个数间有间距 
			n=n+1;//n变量是为了输出5个为一行 
		}
		if(n%5==0&&x==0)
		{
			printf("\n");
		} 
		x=0;
	}
	 return 0;
}

