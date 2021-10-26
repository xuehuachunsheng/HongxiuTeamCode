#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,u,y,j=5;
	for(i=10000;i<50000;i++)
{
		x=i/100;
		y=i%10;
		u=y*100+(i%1000)/100+((i%100)-y);
		if(u==x)
		{
			printf("%-8d",i);
			j=j+1;
		}
		if(j%5==0)
		{
			printf("\n");
		}
	}
	return 0;
}

