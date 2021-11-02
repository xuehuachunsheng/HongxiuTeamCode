/**
 * 试题C: 蛇形填数
 * 参考：https://www.lanqiao.cn/courses/2786/learning/?id=88886
 **/
#include <stdio.h>

int main(int argc, char **argv)
{
    /**
     * 解法1：数学计算
     * 第20行20列的数应该算到第39斜列的中间。
     * 前38斜列最大的数为1+2+...+38 = 780.
     * 第39斜列的中间的数是第38斜列最大的数在加上39/2+1
     **/
    int sum = 0;
    for (int i = 1; i <= 38; ++i)
        sum += i;
    sum += 39 / 2 + 1;
    printf("%d\n", sum);

    /**
     * 解法2：暴力破解
     **/
    int array[50][50];
    for (int i = 0; i < 50; ++i)
        for (int j = 0; j < 50; ++j)
            array[i][j] = 0;
    array[0][0] = 1;
    sum = 0;
    bool flag = true; // 判断是从上往下还是从下往上
    for (int i = 1; i < 50; ++i)
    {
        if (flag) // 从上往下
        {
            array[0][i] = array[0][i - 1] + 1;
            int r = 0;
            int c = i;
            while (c > 0)
            {
                array[r + 1][c - 1] = array[r][c] + 1;
                ++r;
                --c;
            }
        }
        else
        {
            array[i][0] = array[i - 1][0] + 1;
            int r = i;
            int c = 0;
            while (r > 0)
            {
                array[r - 1][c + 1] = array[r][c] + 1;
                --r;
                ++c;
            }
        }
        flag = !flag;
    }
    // for(int i = 0; i < 50; ++i)
    // {
    //     for(int j = 0; j < 50; ++j)
    //     {
    //         printf("%03d ", array[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("%d\n", array[19][19]);

    // 解法3. 不用数组
    int r = 0; // 表示行
    int c = 0; // 表示列
    int num = 1; // 当前数字
    flag = true;
    bool isFind = false; // 是否计算完毕
    while (!isFind)
    {
        if (flag) // 从上往下
        {
            c++; // 新起一斜列，因此列应该+1
            while (c > 0)
            {
                num++;
                r++;
                c--;
            }
        }
        else // 从下往上
        {
            r++; // 新起一斜列，从下往上， 因此r应该+1
            while (r > 0)
            {
                num++;
                if (r == 19 && c == 19)
                {
                    printf("%d", num);
                    isFind=true;
                    break;
                }
                r--;
                c++;
            }
        }
        num++;
        flag = !flag;
    }
    return 0;
}