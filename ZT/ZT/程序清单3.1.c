#include<stdio.h>
int main()
{
	float weight;
	float value;
	printf("Are you worth your weight in platinue?\n");
	printf("Let's check it out.\n");
	printf("please enter your weight in pounfs:");
	scanf("%f",&weight);
	value=1700.0*weight*14.5833;
	printf("your weight in platinum is worth $%.2f.\n ",value);
	printf("you are easily worth that! if platinum price drop,\n");
	printf("eat more to maintain your value.\n"); 
	return 0;
 } 
