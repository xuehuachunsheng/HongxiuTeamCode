#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    void *p1=NULL;
    void *p2=NULL;
    int v = 10;
    p1 = &v; // p1 -> v
    v += 20;
    p2 = &v;
    printf("%p   %p", p1, p2);
    return 0;
}




