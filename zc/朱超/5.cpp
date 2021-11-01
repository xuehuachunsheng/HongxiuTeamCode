#include <stdio.h>
int main()
{
    int n,i;//i为循环次数 
    float m,dis1,dis,dis_before;//从m米高度自由下落 ,第n次落地 
    scanf("%f%d",&m,&n);//dis1为此次反弹高度，dis为总距离，disbefore为保留前一次的反弹高度 
    dis1=m;
    dis=m;//假设第一次反弹高度和距离为s 
    dis_before=0;//理解为什么这样定义！！！！ 
    for(i=1;i<=n;i++)//对于反弹次数的数据
    {
        dis_before=dis1;//定义初始变量为0，并在每次保留上一次的反弹高度
        dis1=dis1/2;//反弹后高度折半
        if(i==1)//如果是第一次下落，就没什么好说了，直接是初始高度
        dis=dis;
        else
        {
//printf("%.2f %.2f %.2f\n",dis1,dis,dis_before);
              if(n==1)
                dis=dis;
              else
                dis=dis+dis_before*2;//画图的话会清晰一些，就是上次的反弹乘2
        }
//printf("%.2f %.2f %.2f\n",dis1,dis,dis_before);
    }
    printf("%.2f %.2f",dis1,dis);//后面保留两位小数
    return 0;
} 
