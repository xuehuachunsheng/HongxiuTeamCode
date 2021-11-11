#include<stdio.h>   //有一班级有8名学生参加了英语考试， 编写程序，将这些学生的成绩按从高到低的顺序排序。
int main()
{
	int a[4]={7,5,9,4};
	int i,k,j;
	printf("输出同学们的成绩:");
	for(i=0;i<4;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	
		 
	for(i=0;i<4;i++)//排序 
	{
		for(j=0;j<4;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%5d",a[i]);
	}
	return 0;
}

