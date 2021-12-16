  #include<stdio.h>
long fact(long n);//定义函数数据类型声明  
int main(void)//定义无返回类型函数 
{
	int n;
	long result;
	
	printf("放入n的值：");
	scanf("%d",&n);
	result=fact(n);//将定义函数的返回值赋值给result 
	if(result!=0)
	{
		printf("%d!=%ld\n",n,result);
	 } 
	 
 } 
 
 long fact(long n)//
 {
    if(n<0)
    {
	printf("date error!\n");
    return 0; //
	}
	else if (n==0||n==1)  return 1;//
	else return n*fact(n-1);//
 }
