#include<stdio.h>
void to_binary(unsigned long n);

int main(void)
{
	unsigned long number;
	printf("Enter an integer(q to quit):\n");
	while(scanf("%lu",&number)==1)
	{
		printf("Binary equivalent:");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer(q to quit):\n");
		
	}
	printf("Done.\n");
	
	return 0;
}

void to_binary(unsigned long n)
{
	int r;
	
	r=n%2;//每次取余2 
	if(n>=2) to_binary(n/2);//迭代缩小n的值 
	putchar(r==0?'0':'1');//直到n<=2时 打印0或者1 
	return; 
}
