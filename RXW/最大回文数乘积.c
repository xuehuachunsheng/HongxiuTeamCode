#include<stdio.h>
int main()
{
	int i,j,m=0,x=0;
	int a,b,c,d,e,f;
	for(i=100;i<1000;i++)
	{
		for(j=100;j<1000;j++)
		{
			m=i*j;
			if(m>=100000)
			{
				a=m/100000%10;//十万位
				b=m/10000%10;//万位
				c=m/1000%10;//千位
				d=m/100%10;//百位
				e=m/10%10;//十位
				f=m/1%10;//个位
				if(a==f&&b==e&&c==d&&m>x)
				{
					x=m;
				}
			}
			else
			{
				b=m/10000%10;//万位
				c=m/1000%10;//千位
				d=m/100%10;//百位
				e=m/10%10;//十位
				f=m/1%10;//个位
				if(b==f&&c==e&&m>x)
				{
					x=m;
				}
			}
		}
	}
	printf("%d",x);
	return 0;
}
