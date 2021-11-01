#include<stdio.h>
int main()
{
	int mb=256,a=4;
	int kb;
	int i;
	kb=1024*mb;
	i=kb*1024/a; 
	printf("%d",i);
	return 0;
}
