#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a<=32||a==127)
	printf("¿ØÖÆ×Ö·û£¡");
	else if(a>=65&&a<=90)
	printf("´óÐ´×ÖÄ¸£¡");
	else if(a>=97&&a<=122)
	printf("Ð¡Ð´×ÖÄ¸£¡");
	else if(a>=48&&a<=57)
	printf("Êý×Ö£¡");
	else 
	printf("ÆäËû£¡"); 
	return 0;
}
