// C基本变量类型
#include <stdio.h>

int main(int argc, char **argv)
{
    char a = '0';
    unsigned char a1 = '0';
    short a2 = 123;
    unsigned short a3 = 123;

    int b = 1;
    unsigned int b1 = 1;
    long c = 789L;
    unsigned long c1 = 789L;
    long long d = 7890LL;
    unsigned long long d1 = 7890LL;
    float e = 2.0f;
    double f = 2.0;

    printf("char type: %d byte\n", sizeof(a));
    printf("unsigned char type: %d byte\n", sizeof(a1));

    printf("short type: %d byte\n", sizeof(a2));
    printf("unsigned short type: %d byte\n", sizeof(a3));

    printf("int type: %d byte\n", sizeof(b));
    printf("unsigned int type: %d byte\n", sizeof(b1));

    printf("long type: %d byte\n", sizeof(c));
    printf("unsigned long type: %d byte\n", sizeof(c1));

    printf("long long type: %d byte\n", sizeof(d));
    printf("unsigned long long type: %d byte\n", sizeof(d1));

    printf("float type: %d byte\n", sizeof(e));
    printf("double type: %d byte\n", sizeof(f));

    return 0;
}