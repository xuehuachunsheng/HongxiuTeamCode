#include<stdio.h>
int main()
{
	int a,b,c,t=0;
	int s1,s2,s3,s4,s5,s6;
	for(a=100;a<1000;a++)
	{
		for(b=100;b<1000;b++)
		{
			c=a*b;
			s1=c/100000;
			s2=c/10000%10;
			s3=c/1000%10;
			s4=c/100%10;
			s5=c/10%10;
			s6=c%10;
			if(s1==s6&&s2==s5&&s3==s4)
			{
				if(t<c)
				t=c;	
			} 
		}
	}
	printf("%d",t);
	return 0;
}
