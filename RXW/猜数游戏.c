#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("我想了有个1到100的数。\n"); 
	do{
		printf("猜猜这个数是多少：");
		scanf("%d",&a);
		count ++;
		if(a>number)
		{
		printf("你猜的数大了，\n");
		}
		else if(a<number)
		{
		printf("你猜的数小了，\n");
		}
	}while(a!=number);
	printf("真菜，用了%d次才猜到。\n",count);
	return 0;
}
