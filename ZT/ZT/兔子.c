#include<stdio.h>
int main()
{
int y1=1,y2=1,y3,i;
printf("%10d%10d",y1,y2);//单独输出第一和第二项 
for(i=3;i<=30;i++)//循环从第三次开始 
{
	y3=y1+y2;
	printf("%10d",y3);
	if(i%5==0) printf("\n");//每5个输出一个回车 
	y1=y2;
	y2=y3;
}
return 0;
 } 
