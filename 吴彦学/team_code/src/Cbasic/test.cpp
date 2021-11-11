#include <stdio.h>
#include <Windows.h>

int main()
{
    int times = 100; //轰炸次数
    printf("请输入轰炸次数：");
    scanf("%d", &times);
    // //确定对象
    char object1[30] = {0};
    printf("请输入轰炸对象：");
    scanf("%s", object1);
    // //获取窗口
    HWND id = FindWindowA(NULL, object1);
    id = GetDesktopWindow(); //得到桌面窗口
    id = GetWindow(id, GW_CHILD); // GW_CHILD
    printf("%ld", id);
    //编辑消息(手动)
    //复制消息(手动)
    HWND *a = (HWND *)malloc(100 * sizeof(HWND));
    int i = 0;
    while (id != NULL) //循环得到所有的子窗口
    {
        a[i++] = id;
        printf("%d\n", id);
        char s[200] = {0};
        memset(s, 0, 200);
        GetWindowText(id, s, 200);
        id = GetNextWindow(id, GW_HWNDNEXT);
    }

    for (int j = 0; j < times; ++j)
    {
        for (int k = 0; k < i; ++k)
        {
            SendMessageA(a[k], WM_PASTE, 0, 0); //WM_PASTE 粘贴
            //发送消息
            SendMessageA(a[k], WM_KEYDOWN, VK_RETURN, 0);
        }
    }
    //在吗在吗在吗
    return 0;
}
