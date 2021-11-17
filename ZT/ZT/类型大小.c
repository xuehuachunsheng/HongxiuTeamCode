#include<stdio.h>
int main(void)
{
	printf("int占%u个字节\n",sizeof(int));
	printf("char占%u个字节\n",sizeof(char));
	printf("long占%u个字节\n",sizeof(long));
	printf("long long 占%u个字节\n",sizeof(long long));
	printf("double占%u个字节\n",sizeof(double));
	printf("long double占%u个字节\n",sizeof(long double));
	return 0;
 } 
