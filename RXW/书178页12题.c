#include<stdio.h>
#define num 30
int main()
{
	int a[num][4]={0},i=0,j=0,t;
	for(i=0;i<num;i++)//成绩读取 
	{
		printf("请输入学号：");
		scanf("%d",&a[i][j]);
		printf("请输入课程1的成绩：");
		scanf("%d",&a[i][j+1]);
		printf("请输入课程2的成绩：");//please input course 2 score
		scanf("%d",&a[i][j+2]);	
		a[i][3]=a[i][j+1]+a[i][j+2];//0是学号,1是成绩1,2是成绩2,3是总分 
	}
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i][3]>a[j][3])
			{
				t=a[j][1];
				a[j][1]=a[i][1];
				a[i][1]=t;
				t=a[j][0];
				a[j][0]=a[i][0];
				a[i][0]=t;
				t=a[j][2];
				a[j][2]=a[i][2];
				a[i][2]=t;
				t=a[j][3];
				a[j][3]=a[i][3];
				a[i][3]=t;
			}
		}
	}
	printf("学生    课程1      课程2    总分\n");
	for(i=num-1;i>=0;i--)
	{
		printf(" %d       %d        %d      %d\n",a[i][0],a[i][1],a[i][2],a[i][3]);
	}
	return 0;
}
