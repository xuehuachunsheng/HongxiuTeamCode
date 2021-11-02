// 子串分值和
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <set>
using namespace std;

bool set_char[26];
int size = 0;
void clear()
{
    for(int i = 0; i < 26; ++i)
        set_char[i] = false;
    size = 0;
}
void insert_char(char c)
{
    if (!set_char[c - 97])
    {
        set_char[c - 97]=true;
        ++size;
    }
}
int main(int argc, char **argv)
{
    // 输入不定长字符串
    // 解法1. 使用C++标准库set.
    // string str;
    // getline(std::cin, str);
    // int L = str.length();
    // char *c_array = const_cast<char*>(str.c_str());
    // long sum = 0;
    // set<char> c_set;
    // for (int i = 0; i < L; ++i)
    // {
    //     c_set.clear();
    //     c_set.insert(c_array[i]);
    //     ++sum;
    //     for (int j = i+1; j < L; ++j)
    //     {
    //         c_set.insert(c_array[j]);
    //         cout << c_set.size() << " ";
    //         sum += c_set.size();
    //     }
    // }
    // printf("%ld\n", sum);

    // 解法2. 自定义集合，并定义清空方法和插入方法.
    string str;
    getline(std::cin, str);
    int L = str.length();
    char *c_array = const_cast<char*>(str.c_str());
    long long sum = 0LL;
    for (int i = 0; i < L; ++i)
    {
        clear();
        insert_char(c_array[i]);
        ++sum;
        for (int j = i+1; j < L; ++j)
        {
            insert_char(c_array[j]);
            sum += size;
        }
    }
    printf("%ld\n", sum);
    return 0;
}