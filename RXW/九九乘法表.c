#include<stdio.h>
int main()
{
	int i,a,b,c,d=1,e;
	printf("   |");
	for(e=1;e<10;++e)
	{
		printf("%4d",e);
	}
	printf("\n");
	for(i=0;i<=39;i++)
	{
		printf("-");
	}
	printf("\n");
   /* for(a=1;a<10;++a,++d)
    {
        printf("%d |",a);
        printf("%3d",d);
        printf("\n");
    }*/
   for(a=1,b=1;b<10;++a,++b)
	{
		printf(" %d |",a);
		for(c=1;c<10;++c)
		{
			d=b*c;
			printf("%4d",d);
		}
		printf("\n");
	}
	return 0;
}
