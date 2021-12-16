#include<stdio.h>
int main(void)
{
	int guess=1;
	
	printf("Pick an integer from 1 to 100. i will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with ");
	printf("\n an n if it is wrong.\n");
	printf("Um... is your number %d?\n",guess);
	while(getchar()!='y')
	printf("well ,then ,is it %d?\n",++guess);
	printf("i knew i could do it!\n");
	
	return 0;
}
