#include<stdio.h>
int main()
{
 	float e=1,a=1;
	while(1/a>=0.00001)
	{
        a=a*(a+1);
        e=e+1/a;
	}
	printf("e=%.5f",e);
 	return 0;
}


//#include <stdio.h>
//int main()
//{
//	float e=1.0,n=1.0;
//    int i=1;
//	while(1/n>0.00001)
// 	{
//		e=e+1/n;
//		i++;
//		n=i*n;
// 	}
//	printf("eµÄÖµÊÇ£º%f",e);
//	return 0;
//}


