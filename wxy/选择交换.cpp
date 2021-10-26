#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i,j,t,l;
	srand(3);
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%3d",a[i]);
	}
	printf("\n");
	for(i=0;i<=9;i++)
	{
		l=i;
	for(j=i+1;j<=9;j++)
	{
		if(a[l]>a[j])
		{
			l=j;
		}
	}
     if(l!=i)
	 { 
		t=a[i];
	    a[i]=a[l];
	    a[l]=t;
	}
    }
    for(i=0;i<10;i++)
    {
    	printf("%3d",a[i]);
	}
	return 0;
 } 
