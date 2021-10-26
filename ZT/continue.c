#include<stdio.h>
int main()
{
int i,n,score;
float sum=0,aver;
printf("输入学生的个数：");
scanf("%d",&n);
for(i=1;i<=n;i++)
 { 
	printf("请输入学生的成绩：");
	scanf("%d",&score);
	if(score<0||score>100)
	{
		printf("输入错误\n");
		i--;
		printf("9\n");
		continue;
		printf("1\n");	 
	} 
	sum=sum+score;
	printf("2\n");
	 //i++其实隐藏于此 
 } 
 aver=sum/n;
printf("i=%d\n",i);
printf("i++=%d\n",i++);
printf("i--=%d\n",i--);
printf("i=%d\n",i);
 printf("average=%.2f\n",aver);
 printf("3\n");
	return 0;
 } 
//continue是跳出本次循环，并判断是否执行下一次循环  
