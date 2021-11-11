#include <stdio.h>

int main(int argc, char **argv)
{
    int a[50]; // 申明一个长度为50的数组，存放整型数据
    int b[] = {10,1,5,6,7,8}; // 申明一个长度为数组，其内容为10,1,5,6,7,8，长度为6
    
    for(int i = 0; i < 50; ++i)
        a[i] = 0;

    return 0;
}