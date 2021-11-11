#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned)time(NULL));
	int a=44+rand()%42;
	int b=44+rand()%42;
//	int c=44+rand()%42;
	printf("%d %d",a,b);
	return 0;
}
