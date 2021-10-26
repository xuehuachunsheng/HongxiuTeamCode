#include<stdio.h>
#include<string.h>
#define M 80
#define N 80
int main(void)
{
	char b[M]={};
	scanf("%s",b);
	int i=0;
	for(i;i<=80;i++)
	{
		if(b[i]==97||b[i]==101||b[i]==105||b[i]==111||b[i]==117)
		{
			printf("%c",b[i]);
		}
	}
	return 0;
}





