#include <stdio.h>

int main()
{
    int aa[50][50];

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            aa[i][j] = 1;
        }
    }
    
    printf("%p\n", aa[0]); // aa[0] --> 200个字节 50个整数
    
    return 0;
}