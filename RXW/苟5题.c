#include <stdio.h>
int main()
{
	char a[80]={0};
	int i=0,j;
	gets(a);
	for(i;i<80;i=i+2)
	{
		printf("%c%c ",a[i],a[i+1]);
	}
	return 0;	
}
