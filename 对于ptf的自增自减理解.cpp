#include<stdio.h>
int main()
{
	int i=5;
	i++;
/*m=i++ ==>m=i后 i自加,
而m=++i==>i自加后赋值给m*/ 
	printf("i=%d,i++=%d",i,i++);
	return 0;
 } /*prf(,i++)其实对i又进行了一次自增自减的行为 
 对于本程序的理解i=5，i++后i=6,prf对i=6再次执行自增
 故i=7 i++=6*/ 
