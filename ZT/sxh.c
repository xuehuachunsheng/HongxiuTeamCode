#include<stdio.h>
int fun(int x);
int main()
{
	int n,k;
	
	for(n=100;n<1000;n++)
	{
		k=fun(n);
		if(k) printf("%5d",n);
	}
	return 0;
}

int fun(int x)
{
	int i,j,m;
	
	i=x/100;
	j=x/10%10;
	m=x%10;
	if(x==i*i*i+j*j*j+m*m*m) return 1;
	else return 0;
}
