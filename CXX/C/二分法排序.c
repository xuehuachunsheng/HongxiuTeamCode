#include<stdio.h>
void sort(int array[],int left,int right);

int main(void)
{
    int array[] = {9,17,2,234,452,32,1,34,0,24,456,233};
    int length,i;

    length = sizeof(array)/sizeof(array[0]);
    sort(array,0,length-1);
    printf("从小到大排序为：\n");
    for(i=0;i<length;i++)
    {
        printf("% d",array[i]);
        if(i<length-1)
        {
            printf(" <");
        }
    }
    return 0;
}

void sort(int array[],int left,int right)
{
    int i = left,j = right;
    int temp;
    int pivot;

    pivot = array[(left+right)/2];
    while(i<=j)
    {
        //从左到右找到大于等于基准点的数
        while(array[i]<pivot)
        {
            i++;
        }
        //从右到左找到小于等于基准点的数
        while(array[j]>pivot)
        {
            j--;
        }
        //如果i<=j互换两个数的位置
        if(i<=j)
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            i++;
            j--;
        }
    }
    if(left<j)
    {
        sort(array,left,j);
    }
    if(right>i)
    {
        sort(array,i,right);
    }
}