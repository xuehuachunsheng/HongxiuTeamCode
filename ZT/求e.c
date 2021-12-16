//while循环 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double n=1; 		--> n是用于求阶乘 
//	double e=1,b=1; 	-->	b是分母 
//	
//	while(fabs(1/b)>=1e-5)  //利用了求绝对值函数fabs，所以需要声明math.h头文件 
//	{
//		b*=n;  			-->b=b*n用于求分母阶乘     比如：第一次循环：n=1,b=1,b=b*n=1*1=1!    第二次循环： n=2，b=b*n=1！*2=1*1*2=2！     第三次循环： n=3，b=b*n=2！*3=1*2*3=3! 
//		e+=1/b;			-->e=e+1/b用于求e的表达式 					e=e+1/b=1+1/1！ 					e=e+1/b=e+1/1！+1/2! 						e=e+1/b=e+1/1！+1/2!+1/3！ 
//		n++;			-->n每次递增 用于求分母阶乘   				n++  --> n=2 						n++  --> n=3 	                            n++  --> n=4   以此类推，直到不满足循环条件 
//	 } 
//	printf("%.5lf",e);
//	return 0;
//}
//for循环 
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double b=1,e=1;
									                              //n=1；					
	for(n=1;fabs(1/b)>=1E-5;n++)//-->for循环可以看作while循环    //while（fabs(1/b）>=1E-5) 
	{															//{			
		b*=n;													//b*=n;			
		e+=1/b;													//e+=1/b;			
		                     									//n++； 
	}															//}  本质上是一样的  
	printf("%.5lf",e);
	return 0;
}
//do   while循环 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double n=1;
//	double e=1,b=1;
//	
//	do
//	{
//		b*=n;			do...while循环的逻辑和上面的while循环一致 
//		e+=1/b;
//		n++;
//	 } while(fabs(1/b)>=1e-5); 
//	printf("%.5lf",e);
//	return 0;
//}
