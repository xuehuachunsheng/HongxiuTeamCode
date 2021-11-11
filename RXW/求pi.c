#include<stdio.h>
int main()
{
    double i,a,b,p=1;
    for(i=2;;i=i+2)
    {
        p=p*(i/(i-1))*(i/(i+1));
        a=i/(i+1);
        b=(i+2)/(i+3);
        if((b-a)<0.00001)
        {
            break;
        }
    }
    printf("%f",2*p);
    return 0;
}

