#include<stdio.h>
int main(void)
{
	double M,N,i=1.0;
	double x,s,a;
	printf("输入自由落体高度和第几次落地\n");
	scanf("%lf%lf",&M,&N);
	s=M;
	for(i;i<=N;i++)
	{
		a=M/2.0;//每次反弹高度 
		s=s+a*2;//依次加跳跃米数 
		M=a;
	}
	printf("%f",a);//第N次高度 
	printf(" ");
	printf("%f",s-a*2);//总距离 
	return 0;
}
