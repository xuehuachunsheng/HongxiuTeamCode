#include<stdio.h>
int main()
{
	int m=1,c=0;
 	float n=0.5,p=0.1;
	for(;p>0;)
	{
		if(m<=4)
   		{
		   if(m+n+p==5)
    	   {
		   		c=1+c;
       			if(n<4.5-m)
      			{
			  		 n+=0.5;
				}
      			else
       			{
					m++;
        			n=0.5;
        		}
      		}
	    else 
	    {
	    	p=p+0.1;
	    }
	}
	else
	{
   		break;
	}
	}
	printf("%d",c);
	return 0;
}

