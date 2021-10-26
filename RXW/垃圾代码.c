#include<stdio.h>
int main()
{
	int c;
	float x;
	printf("请输入一个百分制分数：\n");
	scanf("%f\n",&x);
	  if(x>90)
	   c=1;
	  else if(x>80)
	   c=2;
	  else if(x>70)
	   c=3;
	  else if(x>60) 
	   c=4;
	  else
		c=5;
	switch(c)
	{
		case 1:printf("A\n");break;
		case 2:printf("B\n");break;
		case 3:printf("C\n");break;
		case 4:printf("D\n");break;
		case 5:printf("E\n");break;
		default:printf("error\n");break;
	}
	return 0;
}

