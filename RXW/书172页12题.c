#include<stdio.h>
int main()
{
//	int a[10],i;
//	printf("ÊäÈë10¸öÕûÊý£º");
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);
//	for(i=1;i<=10;i++)
//	{
//		if(i%2==0&&i<9)
//		printf("%3d\n",a[i++-1]);
//		printf("%3d",a[i-1]);
//	 } 
	int k,p;
	int s[]={1,-9,7,2,-10,3};
	for(p=0,k=p;p<6;p++);
	{
		if(s[p]>s[k])
		{
			k=p;
		}
	}
	printf("%d\n",k);
	return 0;
}

