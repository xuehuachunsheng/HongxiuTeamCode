#include <stdio.h>


int main(int argc, char **argv)
{
    enum week {Mon, Tues, Thirs, Thur, Fri, Sat, Sun};
    enum week a = Mon;

    unsigned int x1 = 0x01FF; 
    printf("%d\n", x1);
    unsigned int x2 = x1 << 1; 
    printf("%d\n", x2);

    return 0;
}