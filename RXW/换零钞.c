#include<stdio.h>
int main()
{
	int one,two,five,x=200; 
	for(one=1;one<x*10;one++)
	{
		for(two=1;two<x*10/2;two++)
		{
			for(five=1;five<x*10/5;five++)
			{
				if(one*10==two&&one*1+two*2+five*5==200)
				{
					printf("ÐèÒª%dÕÅ³®Æ±",one+two+five);
					printf("%d,%d,%d",one,two,five);
				}
				
			}
		}
	}
	return 0;
} 
