#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *arr;

    int n;
    printf("请输入字符串的长度：");
    scanf("%d", &n);
    arr = (char *)malloc(n * sizeof(char));
    printf("请输入字符串: ");
    scanf("%s", arr);
    printf("你输入的字符串是: %s", arr);
    return 0;
}






