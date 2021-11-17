#include<stdio.h>
int main()
{
int year,month;
printf("请输入一个年份：",year);
scanf("%d",&year);
if(year%4==0&&year%100!=0||year%400==0)
{
	printf("该年为闰年\n");
 	printf("请输入该年的一个月份：");
	scanf("%d",&month);
	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("该月有31天");break;
	case 4:
	case 6:
	case 9:
	case 11:printf("该月有30天");break;
	case 2:printf("该年二月有29天");break;
	default:printf("输入错误");break; 
	}
}
else
{

    printf("该年为平年\n");
	printf("请输入该年的一个月份：");
	scanf("%d",&month);
	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("该月有31天");break;
	case 4:
	case 6:
	case 9:
	case 11:printf("该月有30天");break;
	case 2:printf("该年二月有28天");break;
	default:printf("输入错误");break;	
	 } 
	
}
return 0;
}
