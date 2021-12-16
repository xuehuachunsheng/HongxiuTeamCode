#include<stdio.h>
#define R 2
#define C 3
int main(void)
{
	int a[R][C]={{1,2,3},{4,5,6}}; 
	int re_a[C][R];
	int i,j;
	printf("a:\n");
	for(i=0;i<R;i++)
	{
	 for(j=0;j<C;j++)
	 {
	  printf("%5d",a[i][j]);
	  re_a[j][i]=a[i][j];
	 }
	 printf("\n"); 	
	} 
	printf("re_a:\n");
	for(i=0;i<C;i++)
	{for(j=0;j<R;j++)
	  printf("%5d",re_a[i][j]);
	printf("\n"); 
	}  
return 0;
 } 
