#include<stdio.h>
int main()
{
	int i,j,s=0;	 
			for(i=1;i<=5;i++)
			{
				s=s*10+2;
						if(i>=2&&i<=4)
								printf("%d",s);
						else if(i>=2&&i<=4)
						printf("+");		
						else if(i==1)
							{
								printf("s=");
								printf("%d+",s);
								continue;
							}
						
			}			
				
			return 0;
}

