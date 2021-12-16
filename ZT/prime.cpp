#include<stdio.h>
int prime(int x);
int main()
{
	int i,k;
	
	for(i=100;i<1000;i++)//依次循环100~1000的值 
	{
		k=prime(i);//将100~1000的数依次通过prime函数来判断是否为素数，并将返回值赋值给k 
		if(k) printf("%5d",i); //if（k）的原理和水仙花的原理一模一样 
	}
	
	return 0;
}

int prime(int x)
{
	int i;
	for(i=2;i<x;i++) 
	if(x%i==0) break;
	if(i>=x) return 1;
	else return 0;
}
