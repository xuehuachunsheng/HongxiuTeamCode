#include<stdio.h>
int main()
{
	int k[10]={23,42,75,3,65,22,66,9,12,8};
	int i=0,j=0;
	int a,b,c,d;
	int m=0,n=9;
	for(i;i<9;i++)
	{
		if(k[m]%2==0&&d==2)
		{
			a=k[m];
		}
		else
		{
			m++;
		}
		if(k[n]%2==1)
		{
			b=k[n];
		}
		else
		{
			n--;
		}
		d=1;
		if(a%2==0&&b%2==1)
		{
			k[m]=b;
			k[n]=a;
			d=2;
		}
		if(m==n)
		{
			break;
		}
	}
	for(j;j<10;j++)
	{
		printf("%d ",k[j]);
	}
	return 0;
}
