#include<stdio.h>
int main()
{
	float array[4][3]={{3.4,-5.6,56.7},{56.8,999.,-.0123},{0.45,-5.77,123.5},{43.4,0,111.2}};
	int i,j,min,m=0,n=0;
	min=array[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(min>array[i][j])
			{
				min=array[i][j];
				m=i;
				n=j;
			}
		}
	}
	printf("min=%d,m=%d,n=%d\n",min,m,n);
}
