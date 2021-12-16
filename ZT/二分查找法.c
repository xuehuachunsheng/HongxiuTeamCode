#include<stdio.h>
#define N 10
int main(void)
{
	int a[N]={-165,-121,0,6,24,58,65,178,190,237};//顶定数组,已知进行了大小排序 
	int x=-121;//待查找数 
	int location,bottom=0,top=N-1,mid,flag=0;//待查找数的位置，上下界，中间值，判别标志 
	while(bottom<=top)//执行循环 
	{
	  mid=(bottom+top)/2; //第一次判定中间值                                                                                              判断a[4]
	   if(a[mid]==x)//如果中间值==查找值 
	   {
	   	location=mid;//定位中间值 
	   	flag=1;//判定照到该值 
	   	break;//跳出循环 
	   }
	  else if(a[mid]>x) top=mid-1;//如果中间元素>x，更行上界为中间值减一 
	  else bottom=mid+1;//如果中间元素<x，更新下界为中间值加一 
	  } //跳回循环，直到找到该值，或者不满足循环条件则跳出循环 
	if(flag==0) printf("bu cun zai \n");//不满足循环条件，说明该值不存在 
	else printf("%d在数组中的位置为%d\n",x,location+1);//循环求出该值，flag=1，执行本条件 
	 
	return 0;
 }
 /*
 mid=4，1，0          mid=4，7，8，9 
 top=9，3，1，（-1）   bot=0，5，8，9，10 
 对于循环，第一次 mid=4 a[4]==第五个元素；判断a[4](第五个元素)是否==x，更新上界为top=3或者更新下界为bot=5  top=a[3]||bot=a[5]                  
 执行第二次循环mid(更新上界)=1或者mid(跟新下界)=7  判断a[1]（第二个元素）||a[7](第八个元素)于x的关系                                            判断a[1]或者a[7] 
 若执行第三次循环 更新top=0或者bot=8   mid=0或者mid=8                                                                                           判断a[0]或者a[8]
 若执行第四次循环 更行top=-1（跳出循环，flag=0  打印不存在）或者bot=9 mid=9 a[9]                                                               跳出判断或判断a[9] 
 若执行第五次循环，更新bot=10，跳出循环，flag=0，不存在 
 更行一次top后更新一次bot或者更行一次bot后更新一次top                                                                                              判断a[2]或a[5]
 更行一次top后更新两次bot																							                                  a[3]
 更行一次bot再更行top再更新bot                                                                                                                         a[6]*/ 
