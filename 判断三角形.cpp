#include<stdio.h>
int main()
{
int a,b,c;
printf("输入三角形的三边：");
scanf("%d%d%d",&a,&b,&c);
 if(a+b>c&&b+c>a&&c+a>b)
   {
   printf("该三角形成立\n");
	if(a==b||b==c||c==a)
	 printf("该三角形为等腰三角形");
	 else if(a==b&&b==c&&c==a)
	  printf("该三角形为等边三角形");
	  else if("a*a+b*b==c*c||c*c+a*a==b*b||b*b+c*c==a*a")
	  printf("该三角形为直角三角形");
	   else
 		printf("该三角形为普通三角形");	
	} 
 else
  	printf("该三边无法组成三角形"); 
return 0;
 } 

