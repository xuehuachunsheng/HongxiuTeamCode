#include"stdio.h"
int main()
{
	int k;
	scanf("%d",&k);
	switch(k)
	{
		case 1:printf("%d\n",k++);
		case 2:printf("%d\n",k++);
		case 3:printf("%d\n",k++);
		case 4:printf("%d\n",k++);
		break;
		default:printf("Full!\n");
	}
}
