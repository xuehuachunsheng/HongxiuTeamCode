#include<stdio.h>
int main()
{
	int i=5,m;
	m=i++;
/*m=i++ ==>m=i后 i自加,
而m=++i==>i自加后赋值给m*/ 
	printf("m=%d,i=%d,i++=%d",m,i,i++);
	return 0;
 } 
 /*对于本程序的理解：定义i=5  m=i++=5，i=6 
 然后prf对于i再执行自增后 i++=6，i=7*/ 
