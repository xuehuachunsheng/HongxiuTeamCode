// 试题F: 成绩统计
#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    float jige = 0; // 及格人数
    float youxiu = 0; // 优秀人数
    for (int i = 0; i < n; ++i)
    {
        int score;
        scanf("%d", &score);
        if (score >= 60)
        {
            ++jige;
            if (score >= 85)
                ++youxiu;
        }
    }
    jige = jige / n * 100;
    youxiu = youxiu / n * 100;
    printf("%d%c\n",(int)(jige+0.5), '%');
    printf("%d%c\n",(int)(youxiu+0.5), '%');

    return 0;
}