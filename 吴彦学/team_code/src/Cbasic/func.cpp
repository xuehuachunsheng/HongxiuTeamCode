#include <stdio.h>

int gcd(int a, int b);

int main(int argc, char **argv)
{
    int a=1997;
    int b=615;
    gcd(a,b);
    return 0;
}

int gcd(int a, int b) // 辗转相除法
{
    while (a != 0 && b != 0)
    {
        int temp = a % b; // 余数
        a = b; // 分母 --> 下一步的分子
        b = temp; // 余数 --> 分母
    }
    return a;
}
