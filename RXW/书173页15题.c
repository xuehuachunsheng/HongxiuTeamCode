#include<stdio.h>
int main()
{
	char ch,str[100];
	int i,k,n=0;
	printf("The string is:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		n++;//判断长度 
	}
	if(n%2==0)//偶数个字母 
	{
		k=n-1;
	}
	else
	{
		k=n-2;
	}
	//k表示需要移动到前面的最后一个数的位置 
	ch=str[k];
	for(i=k-2;i>=1;i=i-2)
	{
		str[i+2]=str[i];
	}
	str[1]=ch;
	printf("The result is:%s\n",str);
}
