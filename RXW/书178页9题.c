#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,m,n,c;
	char a[100],b[100]={0};
	scanf("%s",a);
	n=strlen(a);//计算长度 
	printf("输入第几个字符");
	scanf("%d",&m);
	c=m;
	for(i=0;i<n-m+1;i++,c++)
	{
		b[i]=a[c-1];
	}
	printf("%s",b);
//	for(j=0;j<100;j++)
//	{
//		printf("%c",b[j]);
//	}
	return 0;
}
