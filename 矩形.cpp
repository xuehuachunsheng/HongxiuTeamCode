#include<stdio.h>
int main()
{
int i,j,m,n;
printf("输入矩形的常和宽:\n");
scanf("%ld",&m);
scanf("%ld",&n);
for(i=0;i<m;i++)printf("*");
printf("\n");
for(j=0;j<n;j++)
{
printf("*");
for(i=0;i<(m-2);i++)printf(" ");
printf("*\n");
}
for(i=0;i<m;i++)printf("*");
return 0;
}
