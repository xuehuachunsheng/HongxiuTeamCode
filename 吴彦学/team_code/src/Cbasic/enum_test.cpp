#include <stdio.h>


int main(int argc, char **argv)
{
    int x = 10;
    int y = x++;
    printf("%d",y);
    y = ++x;
    printf("%d",y);
    return 0;
}