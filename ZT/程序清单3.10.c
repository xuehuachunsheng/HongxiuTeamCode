#include<stdio.h>
int main(void)
{
	float salary;
	printf("\a\a\a\a\a\a\a\a\a输入你想要的月薪:");
	printf(" $      \b\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f的月薪，$%.2f一年",salary,salary*12.0);
	printf("\r奈斯!\n"); 
	return 0;
} 
