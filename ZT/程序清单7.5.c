#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	unsigned long num;//定义无符号整形，待测试的数 
	unsigned long div;//定义判定数，可能的约数   
    bool isprime;//定义布尔类型判断真假，标记素数 
	
	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit.\n");//引导输入 
	while(scanf("%lu",&num)==1) //读取scanf的返回值，如果是一个确切值则返回真，否这（例如q或者各种字母啥的）则返回假 
	  {
	  for(div=2,isprime=true;(div*div)<=num;div++)//for循环。定义循环初始值和布尔标记为真，平方作为循环条件 
	   if(num%div==0) //如果有约数 
	   {
	   	if((div*div)!=num) printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);//如果约数的平方！=num 则他有两个约数 
	   	else printf("%lu is divisible by %lu.\n");//否这  他有一个约数 
	   	isprime=false;//赋值布尔判断为假，不是素数 
		} 
		if(isprime) printf("%lu is prime.\n",num);//如果布尔判断为真，就说明他是素数 
		printf("Please enter another integer for analysis;");//
		printf("Enter q to quit.\n");//循环输入 
		}//整体循环为先读取数，然后进入for循环，进而判断，然后引到输入，继续循环，直到退出循环 
		printf("bye.\n");
	return 0;
	
 } 
