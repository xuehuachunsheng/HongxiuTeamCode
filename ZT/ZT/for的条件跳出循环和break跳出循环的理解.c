#include<stdio.h>
int main()
{int i,m;
scanf("%d",&m);
for(i=2;i<m;i++)
{
if(m%i==0) break;/*本语句结束的条件有两个：(1) break (2)i>=m*/ 
}
if(i>=m) printf("%d是一个素数",m);
else printf("%d不是一个素数",m); 
}
