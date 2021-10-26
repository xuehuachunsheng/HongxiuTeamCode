#include"stdio.h"
int abc(int u,int v);
main()
{
	int c,a=24,b=16;
	c=abc(a,b);
	printf("%d\n",c);
}
int abc(int u,int v)
{
	int w;
	while(v)
	{
		w=u%v;
		u=v;
		v=w;
	}
	return u;
}
