#include<stdio.h>//打印浮点值 
int main(void)
{
	float aboat=32000.0;
	double abet=2.14e9;
	double dip=5.32e-5;
	printf("%f能被写成%e\n",aboat,aboat);
	printf("并且写成十六进制2的幂的型式是%a\n",aboat);
	printf("%Lf能被写成%Le\n",dip,dip); 
	return 0;
 } 
