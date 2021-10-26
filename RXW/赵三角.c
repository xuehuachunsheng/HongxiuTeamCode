#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s;
	printf("输入三角形的三边\n");
	scanf("%d,%d,%d",&a,&b,&c);
	s=a*b*c; 
	if(a+c>b&&a+b>c&&b+c>a)
	printf("三角形成立%d\n",s); 
	else
	printf("三角形不成立");
	return 0;
}
