#include<stdio.h>
int main()
{
	int a,b;
	int d=10,c=1;
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=10;b++)
		{
			if(c==b||d==b)
			printf("  ");
			else if(a==1&&c!=b&&d!=b)
			printf("北");
			else if(b==1&&c!=b&&d!=b)
			printf("西");
			else if(a==10&&c!=b&&d!=b)
			printf("南");
			else if(b==10&&c!=b&&d!=b)
			printf("东");
			
			else if(a==2&&c!=b&&d!=b)
			printf("北");
			else if(b==2&&c!=b&&d!=b)
			printf("西");
			else if(a==9&&c!=b&&d!=b)
			printf("南");
			else if(b==9&&c!=b&&d!=b)
			printf("东");
			
			else if(a==3&&c!=b&&d!=b)
			printf("北");
			else if(b==3&&c!=b&&d!=b)
			printf("西");
			else if(a==8&&c!=b&&d!=b)
			printf("南");
			else if(b==8&&c!=b&&d!=b)
			printf("东");
			
			else if(a==4&&c!=b&&d!=b)
			printf("北");
			else if(b==4&&c!=b&&d!=b)
			printf("西");
			else if(a==7&&c!=b&&d!=b)
			printf("南");
			else if(b==7&&c!=b&&d!=b)
			printf("东");	
		}
		printf("\n");
		c++,d--; 
	}
	return 0;
}
