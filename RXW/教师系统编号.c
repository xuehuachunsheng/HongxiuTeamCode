#include<stdio.h>
#define N 10
int main()
{
	int i,j;
	char k,array[N]; 
	for(i=0;i<N;i++)
	{
		printf("请输入数组的第%d个老师的编号：",i+1);
		gets(array);
		for(j=0;j<i;j++)
		{
			if(array[j]==k)
			{
				printf("此编号已存在，请重新输入：");
				scanf("%c",&k);
				j=-1;
			}
		}
		array[i]=k;
	}
	printf("\n");	
	for(i=0;i<N;i++)//输出 
	printf("  第%d个教师的编号为%c\n",i+1,array[i]);
	return 0;
}

