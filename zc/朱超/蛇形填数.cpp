#include<stdio.h>
int main()
{
	int a[40][40];
	int i=1,x=0,y=0,m=1;
	a[0][0]=1;
	for(i=1;i<=40;i++)
	{
		if(i%2==1)
		{
			for(;x>=0;)
			{
				if(x==0)
				{
					y++;
					m++;
					a[x][y]=m;
					break;
				}
				else 
				{
					x--,y++,m++;
					a[x][y]=m;
				}
			}
			
		}
		else if(i%2==0)
		{
			for(;y>=0;)
			{
				if(y==0)
				{
					x++,m++;
					a[x][y]=m;
					break;
				}
				else 
				{
					x++,y--,m++;
					a[x][y]=m;
				}
			}
		}
	}
	printf("%d",a[20][20]);
	return 0;
 } 
