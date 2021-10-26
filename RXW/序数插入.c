#include<stdio.h>
int a[10]={1,7,15,26,35,47,52,68,94};
int main() 
{
	int n;
	scanf("%d",&n);
	for(int i=8;i>=0;i--)
	{
		if(n<a[i])
		{
			a[i+1]=a[i];
		}
		else
		{
			a[i+1]=n;
			break;
		}
	}
	for(int i=1;i<10;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
