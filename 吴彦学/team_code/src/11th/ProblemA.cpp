/**
 * 试题A: 门牌制作
 * 问题描述：小蓝要为一条街的住户制作门牌号。
 * 这条街一共有2020位住户，门牌号从1到2020编号。
 * 小蓝制作门牌的方法是先制作0到9这几个数字字符，最后根据需要将字符贴到门牌上，
 * 例如门牌1017需要依次粘贴字符1、0、1、7，即需要1个字符0，2个字符1，1个字符7。
 * 请问要制作所有的1到2020号门牌，总共需要多少个字符2?
 **/
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    // 解法1. 常规解析
    int n = 2020;
    int sum = 0;
    for (int i = 1; i <= 2020; ++i)
    {
        sum += (i % 10 == 2); // 解析出个位
        sum += ((i/10) % 10 == 2); // 解析出十位
        sum += ((i/100) % 10 == 2); // 解析出百位
        sum += ((i/1000) % 10 == 2); // 解析出千位
    }
    printf("%d\n", sum);
    ///////////////////





    
    // 解法2. 转化为字符串 利用C++语法。
    sum = 0;
    for (int i = 1; i <= 2020; ++i)
    {
        string num_str = to_string(i); // 字符串变量 实际上是一个字符的数组
        for (int j = 0; j < num_str.length(); ++j) // "1022"
            if (num_str[j] == '2')
                ++sum;
    }
    printf("%d\n", sum);
    return 0;
}