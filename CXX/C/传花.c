#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,m,k,p1,p2,s;
    int *p;
    p = (int *)malloc(1e6 * sizeof(int *));
    scanf("%d%d%d%d%d",&n,&m,&k,&p1,&p2);
    for(i = 0;i < 1e6;i++)
    {
        p[i] = 1;
    }
    for(i = 0;;i++)
    {
        if(p[p1] == 0 && p[p2] == 0)
        {
            break;
        }
        p[p1] = 0;
        p[p2] = 0;
        p1 = (p1 + k) % n;
        p2 = (p2 + k) % n;
        p1 = p1 % n;
        p2 = p2 % n;
    }

    s = 0;
    for(i = 0;i < n;i++)
    {
        if(p[i] != 0)
        {
            s++;
        }
    }

    printf("%d",s);

    return 0;
}