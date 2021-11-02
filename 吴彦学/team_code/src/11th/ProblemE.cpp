// 试题E: 七段码

#include <stdio.h>

bool isNeighbor[7][7];

void initialize()
{
    for (int i=0; i < 7; ++i)
        for(int j=0; j < 7; ++j)
            isNeighbor[i][j] = false;
    // 0 --> a
    // 1 --> b
    // 2 --> c
    // 3 --> d
    // 4 --> e
    // 5 --> f
    // 6 --> g
    isNeighbor[0][1] = true; 
    isNeighbor[0][5] = true;
    isNeighbor[1][2] = true;
    isNeighbor[1][6] = true;
    isNeighbor[2][3] = true;
    isNeighbor[2][6] = true;
    isNeighbor[3][4] = true;
    isNeighbor[4][5] = true;
    isNeighbor[4][6] = true;
    isNeighbor[5][6] = true;
    for (int i=0; i < 7; ++i)
        for(int j=0; j < 7; ++j)
            if (isNeighbor[i][j])
                isNeighbor[j][i] = true;
}

bool all_neighbors(int aa[], int n) // 判断这些元素是否全部相邻
{
    for (int i = 0; i < n; ++i)
    {
        bool anyNeighbor = false;
        for (int j = 0; j < n; ++j)
        {
            if (j == i) 
                continue;
            if (isNeighbor[aa[j]][aa[i]])
            {
                anyNeighbor = true;
                break;
            }
        }
        if (!anyNeighbor) // 如果存在一个节点，与其他所有节点不相邻，那么返回false
            return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    // 解法0. 数数！这是最快的，但容易遗漏
    // 解法1. 蛮力
    initialize();
    int sum = 17; // 亮1个 7, 亮2个 10
    for (int a1 = 0; a1 < 7; ++a1) // 亮3个
        for(int a2 = 0; a2 < a1; ++a2)
            for(int a3 = 0; a3 < a2; ++a3)
            {
                int aa[] = {a1,a2,a3};
                if (all_neighbors(aa, 3))
                    ++sum;
            }
    for (int a1 = 0; a1 < 7; ++a1) // 亮4个
        for(int a2 = 0; a2 < a1; ++a2)
            for(int a3 = 0; a3 < a2; ++a3)
                for(int a4 = 0; a4 < a3; ++a4)
                {
                    int aa[] = {a1,a2,a3,a4};
                    if (all_neighbors(aa, 4))
                        ++sum;
                }
    sum += 21 - 2; // 亮5个 C_7^5 - 2
    sum += 7; // 亮6个
    ++sum; // 亮7个
    printf("%d\n", sum);
    return 0;
}