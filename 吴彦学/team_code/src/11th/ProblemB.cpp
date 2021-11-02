/**
 * 试题B: 既约分数
 * 问题描述：如果一个分数的分子和分母的最大公约数是1，这个分数称为既约分数。
 * 例如，3/4,5/2,1/8,7/1都是既约分数。
 * 请问有多少个既约分数，分子和分母都是1到2020之间的整数（包括1和2020）。
 **/
#include <stdio.h>

int gcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

bool isPrime(int a)
{
    for (int i = 2; i * i <= a; ++i)
        if (a % i == 0)
            return false;
    return true;
}
int main(int argc, char **argv)
{
    // 解法1. 辗转相除法
    int n = 2020;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (gcd(i,j) == 1)
                ++sum;
    printf("%d\n", sum);
    
    // 解法2. 辗转相除法，降低计算量。
    // 原理: 如果a/b是既约分数，那么b/a肯定是既约分数
    sum = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j < i; ++j)
            if (gcd(i,j) == 1)
                ++sum;
    printf("%d\n", sum*2+1); // 要加上分子和分母相等且都为1这种情况
    

    // 解法3. 先求1到n内质数，然后暴力破解
    sum = 0;
    int primes[1000];
    // 动态分配方法
    // C: int *primes = (int *)malloc(n*sizeof(int));
    // C++: int primes[] = new int[n];
    int n_primes = 0;
    for (int i = 2; i <= n; ++i)
        if (isPrime(i))
            primes[n_primes++] = i;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            int min_value = i < j ? i : j;
            bool gcdEqual1 = true;
            for (int k = 0; k < n_primes && primes[k] <= min_value; ++k)
            {
                int c_prime = primes[k];
                if (i % c_prime == 0 && j % c_prime == 0) 
                // 说明分子和分母的其中一个公约数为c_prime
                // 那么其最大公约数不可能为1
                {
                    gcdEqual1 = false;
                    break;
                }
            }
            if(gcdEqual1)
                ++sum;
        }
    printf("%d\n", sum);
    return 0;
}
