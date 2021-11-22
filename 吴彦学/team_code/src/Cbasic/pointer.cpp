#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int n = 50;
    int *p1, *p2;
    int v = 1;
    p1 = &v;
    v += 10;
    p2 = &v;
    printf("%d %d",p1,p2);
    return 0;
}
