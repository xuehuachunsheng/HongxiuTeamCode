#include<stdio.h>
int main()
{
	int i,sign=1;
	double s=0;
	for(i=1;i<=30;i++)//i=1为循环变量初始值，i<=30为进行循环变量的条件，i++为循环变量的增值 
	{
		s=s+sign*((2.0*i-1)*(2.0*i))/((2.0*i+1)*(2.0*i+2));
		sign=-1*sign;
	}
	printf("s=%.6lf\n",s);
	return 0;
}
