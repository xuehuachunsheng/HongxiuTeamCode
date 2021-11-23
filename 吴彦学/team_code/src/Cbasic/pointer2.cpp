#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *p = (int *)0xAD3489FF;
    printf("%p", p);
    p[0] = 10; // 不能这样做 
    return 0;
}




