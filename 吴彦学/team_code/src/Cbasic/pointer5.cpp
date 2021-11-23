#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *p1 = NULL;
    float *p2 = NULL;
    double *p3 = NULL;
    long *p4 = NULL;
    long long *p5 = NULL;
    void *p6 = NULL;
    long double *p7 = NULL;

    printf("int*: %d\n", sizeof(p1));
    printf("float*: %d\n", sizeof(p2));
    printf("double*: %d\n", sizeof(p3));
    printf("long*: %d\n", sizeof(p4));
    printf("long long*: %d\n", sizeof(p5));
    printf("void*: %d\n", sizeof(p6));
    printf("long double*: %d\n", sizeof(p7));
    return 0;
}




