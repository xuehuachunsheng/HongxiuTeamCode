#include<stdio.h>
int main()
{
    int a;
    printf("请输入一个数，我们帮你判断其奇偶性：");
	scanf("%d",&a);
	if(a%2==0)
	printf("该数为偶数");
	else
	printf("该数为奇数"); 
	return 0;
}
