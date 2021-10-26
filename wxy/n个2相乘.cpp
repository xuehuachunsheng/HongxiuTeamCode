#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	double j=0,k=0;
	printf("ÊäÈë¸öÊı£º");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		j=j+2*pow(10,i);
		printf("%.0f",j);
		if(i!=n-1) printf("+");
		k=k+j;
	}
	printf("=%.0f",k);
	return 0;
}
