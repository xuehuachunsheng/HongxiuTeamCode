#include<stdio.h>
int main()
{
	int a1=2,a2=3,a3=4,a4=6;
	int n,i;
	scanf("%d",&n);
	printf("%d\n",n);
	if(n==1)
	printf("%d",a1);return 0;
	if(n==2)
	printf("%d",a2);return 0;
	if(n==3)
		printf("%d",a3);return 0;
	if(n==4)
		printf("%d",a4);return 0;
	for(i=1;n>4;n--)
	{
		i=a1+a2+a3;
		a1=a2;
		a2=a3;
		a3=a4;
		a4=i;
		if(n<=4)
		{
			return 0;
		}
	}
	printf("%d",i); 
	return 0;
}
