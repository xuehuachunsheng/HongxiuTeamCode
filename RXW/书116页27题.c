#include<stdio.h>
int main()
{
	int a=2,b=3,c=2;
	if(a<b)
	  if(b<0)
    	c=0;
	else c++;
	printf("%d\n",c);
	return 0;
}
