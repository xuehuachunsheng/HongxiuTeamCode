#include<stdio.h>
int main(void)
{
    float a,x,y;
    for(y=1.5;y>-1.5;y=y-0.1)
    {
        for(x=-1.5;x<1.5;x=x+0.05)
        {
            a=x*x+y*y-1;
            if(a*a*a-x*x*y*y*y<0)
            {
            	printf("*");
			}
			else
			{
				printf(" ");
			}
        }
        printf("\n");
    }
    return 0;
}
