#include<stdio.h>
int main()
{
	int a,b;
	float c,i,j,k;
	scanf("%d %d %f",&a,&b,&c);
	for(i=0;a>0;a--)
	{
		i=i+a;
	}
	for(j=0;b>0;b--)
	{
		j=j+b*b;
	}
	for(k=1;c>1;c--)
	{
		k=k+1/c;
	}
	printf("%.2f",i+j+k); 
	return 0;
}
