#include<stdio.h>
#define M 10 
int main()
{
	 int fuck[M]={2,5,343,543,24,96,4,12,90};
	 int i,j,n;
	 for(i=0;i<10;i++)
	 {
	 	for(j=0;j<10;j++)
	 	if(fuck[j]%2==1&&fuck[j+1]%2==0)
	 	{
	 		n=fuck[i];
	 		fuck[i]=fuck[i+1];
	 		fuck[i+1]=n;
		}
	 }
	 for(i=0;i<10;i++)
	 {
	 	printf("%d,",fuck[i]);
	 }
	 return 0;
}
