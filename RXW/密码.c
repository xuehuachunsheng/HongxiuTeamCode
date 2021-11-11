#include<stdio.h>
#include<math.h>
#define M 5
int main(void)
{
	char a[M]={};
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		a[i]=a[i]+4;
	}
	for(i=0;i<5;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
