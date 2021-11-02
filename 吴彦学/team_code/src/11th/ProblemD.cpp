// 试题D: 跑步锻炼
#include <stdio.h>

int main(int argc, char **argv)
{
    // 解法1. 暴力破解，易懂
    int c_year = 2000;
    int c_month = 1; 
    int c_day = 1; 
    int c_week = 6; // 0表示周天
    int monthday[] = {0,31,28,31,30,31,30,
                    31,31,30,31,30,31}; // 平年从1月到12月每月的天数
    int sum_km = 2;
    while (c_year != 2020 || c_month != 10 || c_day != 1)
    {
        // 首先记录是闰年还是平年
        bool runnian = (c_year % 4 == 0 && c_year % 100 != 0) || (c_year % 400 == 0);
        monthday[2] = runnian ? 29 : 28;
        // 记录跑步千米数
        ++c_day; // 加了一天
        ++sum_km; // 加1公里
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
        c_week = (c_week + 1) % 7; // 周几了？
        if(c_week == 1 || c_day == 1)
            ++sum_km;
    }
    printf("%d\n", sum_km);

    // 解法2. 循环结构优化，较为复杂
    c_year = 2000;
    c_month = 0; // 0表示1月
    c_day = 0;  // 0表示月初
    c_week = 6; // 0表示周天
    int monthday1[] = {31,28,31,30,31,30,
                    31,31,30,31,30,31}; // 平年从1月到12月每月的天数
    sum_km = 2;
    while (c_year != 2020 || c_month != 9 || c_day != 0)
    {
        // 首先记录是闰年还是平年
        bool runnian = (c_year % 4 == 0 && c_year % 100 != 0) || (c_year % 400 == 0);
        monthday1[1] = runnian ? 29 : 28;
        // 记录跑步千米数
        ++c_day; // 加了一天
        ++sum_km; // 加1公里
        int t_month = c_month;
        c_month = (c_month + c_day / monthday1[c_month]) % 12;
        c_day %= monthday1[t_month];
        c_year = (c_month == 0 && c_day == 0) ? c_year + 1 : c_year; // 年份是否加1
        c_week = (c_week + 1) % 7; // 周几了？
        if(c_week == 1 || c_day == 0)
            ++sum_km;
    }
    printf("%d\n", sum_km);

    // C/C++目前还没有比较好用的日期操作库
    // 在Java或者Python里面，日期和时间库用起来方便很多。
    // 这个问题如果用Python.. 10行代码就搞定了
    return 0;
}