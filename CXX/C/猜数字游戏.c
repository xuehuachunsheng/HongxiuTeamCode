#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print();
void play();

int main()
{
    int select;
    print();
    do
    {
        scanf("%d",&select);
        switch(select)
        {
            case 1:printf("开始游戏\n");play();printf("是否继续？\n");break;
            case 0:printf("退出游戏\n");break;
            default:printf("请重新输入\n");
        }
    }while(select);

    return 0;
}

void print()
{
    printf("****猜数字游戏****\n");
    printf("******************\n");
    printf("****  1.PLAY  ****\n");
    printf("****  0.EXIT  ****\n");
    printf("******************\n");
}

void play()
{
    int ret,num,n=1;

    srand((unsigned int)time(NULL));
    ret=rand()%100+1;
    printf("ret=%d\n",ret);
    while(1)
    {
        printf("请猜数字：");
        scanf("%d",&num);
        
        if(num==ret)
        {
            printf("恭喜你，第%d就猜对了！\n",n);
            break;
        }
        else if(num>ret)
        {
            printf("猜大了\n");
            n++;
        }
        else if(num<ret)
        {
            printf("猜小了\n");
            n++;
        }

    }

}