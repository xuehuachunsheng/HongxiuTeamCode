#include<stdio.h>
#define N 10
int main()
{
	int array[N]={-165,-121,0,6,24,58,65,178,190,237};
	int x=-121;
	int location;
	int bottom=0;
	int top=N-1;
	int mid;
	int flag=0;
	while(bottom<=top)
	{
		mid=(bottom+top)/2;
		if(array[mid]==x)
		{
			location=mid;
			flag=1;
			break;
		}
		else if(array[mid]>x)
		{
			top=mid-1;
		}
		else
		{
			bottom=mid+1;
		}
	}
	if(flag==0)
	{
		printf("不存在!\n");
	}
	else
	{
		printf("%d在数组中的位置是：%d\n",x,location+1);
	}
	return 0;
}
