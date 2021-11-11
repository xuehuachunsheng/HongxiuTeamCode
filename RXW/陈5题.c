#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]="ugdijsgnzv";
	int i,j;
	for(i=0;i<11;i=i+2)
	for(j=1;j<11;j=j+2)
	{
		printf("%c%c ",str[i],str[j]);
		break;
	}
	return 0;
}

