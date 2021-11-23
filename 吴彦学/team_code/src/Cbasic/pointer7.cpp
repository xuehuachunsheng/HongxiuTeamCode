// 动态分配二维数组
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50][50]; // 静态分配

    int **p=NULL; // 声明双重指针
    
    p = (int **) malloc(50*sizeof(int *)); // 400个字节

    for (int i = 0; i < 50; i++)
    {
        p[i] = (int *) malloc(50*sizeof(int));
    }
    
    for(int i = 0; i < 50; i++)
        for(int j = 0; j < 50; j++)
            p[i][j] = 5;
    
    for(int i = 0; i < 50; i++)
        free(p[i]); // 释放内存

    free(p);
    return 0;
}