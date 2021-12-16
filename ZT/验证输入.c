#include<stdio.h>
#include<stdbool.h>
long get_long(void);
bool bad_limits(long begin,long end,long low,long high);
double sum_squares(long a,long b);
int main(void)
{
	const long MIN=-10000000L;
	const long MAX=10000000L;
	long start;
	long stop; 
	double answer;
	
	printf("This program computes the sum of the squares of "
		   "integers in a range.\n The lower bound shoule not "
	       "be less than -10000000 and\nthe upper bound"
		   "should not be more than +10000000.\nEnter the "
		   "limits(enter 0 for both limits to quit):\n"
		   "lower limit:");
		   start=get_long();//调用无参函数   
		   printf("upper limit:");//打印上限 
		   stop=get_long();
		   while(start!=0||stop!=0)
		   {
		   	if(bad_limits(start,stop,MIN,MAX)) printf("Please try again.\n");//调用bool类型的函数 
		   	else 
			   {
		   		answer=sum_squares(start,stop);//函数返回值赋值 
		   		printf("The sum of the squares of the integers");
		   		printf("from %ld to %ld is %g\n",start,stop,answer);
			   }
			printf("Enter the limits(enter 0 for both "
			   		  "limits to quit):\n");
			printf("lower limit:");
			start=get_long();
			printf("upper limit:");
			stop=get_long();
		   }
		   printf("Done.\n");
		   return 0;
		   }
		   
long get_long(void)//带有返回值的无参函数   作用： 
{
	long input;
	char ch;
	
	while(scanf("%ld",&input)!=1)//函数内部输入   判断是否成功读取输入值 
	{
		while((ch=getchar())!='\n') putchar(ch);
		printf("is not an integer.\nPlease enter an ");
		printf("integer value,such as 25,-178,or 3: ");
	}
	return input;//返回输入值 
}

double sum_squares(long a,long b)
{
	double total=0;
	long i;
	
	for(i=a;i<=b;i++)
	 total+=(double)i*(double)i;
	 
	return total;
	 
}

bool bad_limits(long begin,long end,long low,long high)
{
	bool not_good=false;
	
	if(begin>end)
	{
		printf("%ld isn't smaller than %ld.\n",begin,end);
		not_good=true;
	}
	if(begin<low||end<low)
	{
		printf("Values must be %ld or greater.\n",low);
		not_good=true;
	}
	if(begin>high||end>high)
	{
		printf("Values must be %ld or less.\n",high);
		not_good=true;
	}
	return not_good;
	   }	   
