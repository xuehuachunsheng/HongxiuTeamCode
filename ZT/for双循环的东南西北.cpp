#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
 printf("西");
for(j=1;j<=9-2*i;j++)
 printf("北");
for(j=1;j<=i;j++)
printf("东"); 
printf("\n");
} 
 
for(i=1;i<=4;i++)
{
for(j=1;j<=5-i;j++)
printf("西");
for(j=1;j<=2*i-1;j++)
printf("南");
for(j=1;j<=5-i;j++)
printf("东"); 
printf("\n"); 
}
return 0;
 } 
