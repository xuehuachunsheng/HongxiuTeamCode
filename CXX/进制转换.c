#include<stdio.h>
#define M 2

int _0b(int);

int main()
{
    int num;
    scanf("%d",&num);

    _0b(num);

    return 0;
}

int _0b(int num)
{
    int k = 0,h = 99;
    int a[100] = {0};

    while(num)
    {
        num--;
        a[0] += 1;
        for(k = 0;a[k];k++)
        {
            if(a[k] == M)
            {
                a[k] = 0;
                a[k + 1] += 1;
            }
        }
    }

    while(!a[h])
    {
        h--;
    }

    for(;h >= 0;h--)
    {
        if(a[h] >= 10)
        {
            printf("%c",(char)(a[h] - 10) + 'A');
        }
        else
        {
            printf("%d",a[h]);
        }
    }

    return 0;
}