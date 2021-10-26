#include<stdio.h>
#define N 10
int main()
{
	int i,x=125;
	int array[N]={-165,-121,0,6,24,58,65,178,190,237};
	for(i=0;i<10;++i)
	{
		if(array[i]==x)
		{
			printf("数组中第%d位",i+1);
		}
	}
	if(i>=10)
	{
		printf("不存在");
	}
	return 0;
}
