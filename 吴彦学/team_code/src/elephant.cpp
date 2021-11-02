#include <stdio.h>

typedef struct _Elephant // 大象
{
    char name[20];
    double weight; // 重量
    double height; // 高度
    int gender; // 性别，1表示公，0表示母
}Elephant;

typedef struct _Fridge // 冰箱
{
    Elephant *ele; // 大象
    int store; // 是否存放，1表示存放，0表示未存放
    int open; // 冰箱门状态, 1表示打开，0表示关闭
}Fridge;

typedef struct _People // 人
{
    char name[20];
    Elephant *ele; 
    int eleInHand; // 表示大象是否在手上，1表示在手上，0表示没有在手上
}People;

void openFridge(Fridge f)
{
    f.open = 1;
}
void pushElephant(Elephant e, Fridge f)
{
    f.ele = &e;
}
int main(int argc, char **argv)
{
    // Step 1. 初始化
    People people{"朱超", NULL, 0};
    Fridge fridge{NULL, false, 0};
    Elephant e{"一头可爱的象", 200, 3, 0};

    printf("1. 初始化了一个朱超，");
    // Step 2. 打开冰箱门
    openFridge(fridge);

    return 0;
}