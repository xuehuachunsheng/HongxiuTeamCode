#include<stdio.h>
int main(void)
{
	int a=strlen("ab\045\\\x66");
	printf("%d",a);
	return 0;
}
