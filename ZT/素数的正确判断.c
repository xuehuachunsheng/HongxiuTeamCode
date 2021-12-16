#include<stdio.h>
int main()

{
    int num;
    int i;
    for(i=1;i<256;i++)
	{
        num=i*i;
        int rev_num=0;
        while(num>0)//?????
        {
            rev_num=rev_num*10+num%10;
            num/=10;
        }
        if(rev_num==i*i){
            printf("%d\n",i);
        }
    }
 
    return 0;}


