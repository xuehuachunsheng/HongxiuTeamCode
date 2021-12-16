#include<stdio.h>
int main()
{
	int a[4][3]={5,2,0,9,3,7,12,6,10,4,1,8};
	int i,j,row,list,min;//row记录行号，list记录列好 
	
	min=a[0][0];
	for(i=0;i<4;i++)
	 for(j=0;j<3;j++)
	 	if(a[i][j]<min) 
		 {
		 min=a[i][j];//到这里应该都没问题把，就是寻找最小值的方法 
		 row=i;//当找到最小值后，记录此时i，j的值并分别赋值给row和list，以记录当前的行列号，此后i，j会继续走for循环，会变化，所以需要及时记住此时的行列号 
		 list=j;
		 }
		 printf("min=%d,row=%d,list=%d",min,row,list);//输出的是我们所记录的最小值的行列号，我们记录为row和list，之所以不是i，j是因为循环继续往后走，i和j的值在不断发生变化 
	return 0;
}
