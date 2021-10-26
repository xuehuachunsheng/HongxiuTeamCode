#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,j,t;
	srand(2);
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%3d",a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%3d",a[i]);
	}
	return 0;
}
