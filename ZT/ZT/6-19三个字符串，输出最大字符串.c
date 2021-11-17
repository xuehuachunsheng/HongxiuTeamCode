#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20],c[3][20];
	int i;//—≠ª∑±‰¡ø 
	
	for(i=0;i<3;i++)
	   	gets(c[i]);
	if(strcmp(c[0],c[1])>0)
	  	strcpy(str,c[0]);
	else strcpy(str,c[1]);
	if(strcmp(c[2],str)>0)
		strcpy(str,c[2]);
		printf("max=%s\n",str);     
	return 0;
 } 
