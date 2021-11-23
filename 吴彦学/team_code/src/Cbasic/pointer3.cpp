#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    int *p=NULL;
    p = &n;
    scanf("%d", p);
    printf("n的值是：%d", n);
    return 0;
}




