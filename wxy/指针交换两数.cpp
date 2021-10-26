#include<stdio.h>
#include<stdlib.h>
void swap(int *s)
{
	int temp=0;
	temp=s[1];
	s[1]=s[0];
	s[0]=temp;
 } 
 int main()
 {
 	int *arr;
 	arr=(int*)malloc(2*sizeof(int));//强制转换与分配空间
	 printf("input two numbers:");
	 scanf("%d,%d",&arr[0],&arr[1]);
	 swap(arr);
	 printf("output:%d,%d",arr[0],arr[1]);
	 free(arr);//释放分配空间
	 return 0; 
 }
