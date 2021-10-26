#include<stdio.h>
int main()
{
	char ch;
	int letter,digital,space,other;
	letter=digital=space=other=0;
	while((ch=getchar())!='0')
	{
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')letter++;
		else if(ch>='0'&&ch<='9')digital++;
		else if(ch==' ')space++;
		else other++;
	}
	printf("letter=%d,digital=%d,space=%d,other=%d\n",letter,digital,space,other);
	return 0;
}
