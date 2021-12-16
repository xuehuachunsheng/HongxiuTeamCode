#include<stdio.h>
int main(void)
{
	const int FREEZING=0;//定义不可变量，同时作为分辨条件 
	float temperature;
	int cold_days=0;
	int all_days=0;
	
	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius,and enter q to quite\n");
	while(scanf("%f",&temperature)==1)//输入温度，返回scanf的值，scanf的返回值为你输入的个数 
	{
		all_days++;//如果成功输入一个值，天数自增 
		if(temperature<FREEZING)  cold_days++;//如果气温低于0，冷天自增 
	}
	if(all_days!=0) printf("%d days total:%.1f%% were below freezing\n",all_days,100.0*(float)cold_days/all_days);
	// 
	else printf("No data entered!\n");
	//
	return 0;
}
