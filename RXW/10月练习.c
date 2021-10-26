#include<Stdio.h>
int main(void)
{
	int no;
	do{
		printf("请输入一个整数:");
		scanf("%d",&no);
		if(no<=0)
		{
			puts("\a请不要输入非正整数。");
		}
	}
	while(no<=0);
	{
		printf("%d",no%10);
		no=no/10;
	}
	puts("。");
	return 0;
}
