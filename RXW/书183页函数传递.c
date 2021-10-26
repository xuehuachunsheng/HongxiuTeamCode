#include<stdio.h>
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return(z);
}

int main()
{
	int a,b,c;
	printf("输入两个数字：");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("大的是%d\n",c);
	return 0; 
}
