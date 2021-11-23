#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 50;
    int *p; // 声明一个整型指针变量
     // 利用malloc函数分配长度为n的数组
    p = (int *) malloc(n*sizeof(int)); // 4n个字节的内存空间
    for(int i = 0; i < n; ++i)
        p[i] = 5;
    return 0;
}




