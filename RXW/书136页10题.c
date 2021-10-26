#include<stdio.h>
int main()
{
	float a=1,d=1,e=2,f=0;
	float c=0;
	while(d<=20) 
	{
		c=c+e/a;
		++d;
		f=a;
		a=e;
		e=e+f;
	}
	printf("%.4f",c); 
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	float a=1,d=1,e=2,f=0;
//	float c=0;
//	for(d=1;d<=20;++d)
//	{
//		c=c+e/a;
//		f=a;
//		a=e;
//		e=e+f;
//	}
//	printf("%.4f",c);
//	return 0;
//}

