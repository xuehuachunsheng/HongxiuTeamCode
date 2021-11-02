// 试题G: 回文日期
#include <stdio.h>


bool isHuiwen(int year, int month, int day) // 判断是不是回文日期
{
    if (year / 1000 != day % 10)
        return false;
    if ((year / 100) % 10 != day / 10)
        return false;
    if ((year / 10) % 10 != month % 10)
        return false;
    if (year % 10 != month / 10)
        return false;
    return true;
}

bool isABHuiwen(int year, int month, int day)
{
    if (!isHuiwen(year, month, day))
        return false;
    int a1 = year / 1000;
    int b1 = (year / 100) % 10;
    int a2 = (year / 10) % 10;
    int b2 = year % 10;
    int b3 = month / 10;
    int a3 = month % 10;
    int b4 = day / 10;
    int a4 = day % 10;
    if (a1==a2 && a2 == a3 && a3 == a4 && 
        b1==b2 && b2 == b3 && b3 == b4
        && a1 != b1)
        return true;
    return false;
}

int main(int argc, char **argv)
{
    // 暴力破解
    // 先输入字符串并转化为日期
    int N;
    scanf("%d", &N);
    int c_year = N / 10000;
    int c_month = N % 10000 / 100;
    int c_day = N % 100;
    //printf("%d %d %d", c_year, c_month, c_day);
    
    // 计算回文日期
    int monthday[] = {0,31,28,31,30,31,30,
                    31,31,30,31,30,31}; // 平年从1月到12月每月的天数
    bool findHuiwen = false;
    bool findAB = false;
    int huiwen = 0;
    int abhuiwen = 0;
    while (true)
    {
        // 首先记录是闰年还是平年
        bool runnian = (c_year % 4 == 0 && c_year % 100 != 0) || (c_year % 400 == 0);
        monthday[2] = runnian ? 29 : 28;
        // 记录跑步千米数
        ++c_day; // 加了一天
        if (c_day > monthday[c_month])
        {
            ++c_month;
            c_day = 1;
        }
        if (c_month > 12)
        {
            ++c_year;
            c_month = 1;
        }
        if (!findHuiwen && isHuiwen(c_year, c_month, c_day))
        {
            huiwen = c_year * 10000 + c_month * 100 + c_day;
            findHuiwen = true;
        }
        if (!findAB && isABHuiwen(c_year, c_month, c_day))
        {
            abhuiwen = c_year * 10000 + c_month * 100 + c_day;
            findAB = true;
        }
        if(findAB && findHuiwen)
            break;
    }
    printf("%d\n", huiwen);
    printf("%d\n", abhuiwen);
    return 0;
}