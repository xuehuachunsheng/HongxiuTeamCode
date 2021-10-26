#include<stdio.h>
int main()
{
	int i,j,x;
	int a=100000,b=200000,c=400000,d=600000,e=1000000;
	scanf("%d",&i);
	j=i/100000;
	switch(j)
	{
		case 0:	printf("%d",x=i*0.1);break;
		case 1: 
		{
			if(i>a)	printf("%d",x=a*0.1+(i-a)*0.075);
			else printf("%d",x=a*0.1);
			break;
		}
		case 2:		
		case 3:		
		{
			if(i>b)	printf("%d",x=a*0.1+a*0.075+(i-b)*0.05);
			else	printf("%d",x=a*0.1+a*0.075);
			break;
		}
		case 4:		
		case 5:{
			if(i>c)	printf("%d",x=a*0.1+a*0.075+b*0.05+(i-c)*0.03);
			else	printf("%d",x=a*0.1+a*0.075+b*0.05);
			break;
		}
		case 6:	
		case 7:	
		case 8:	
		case 9:{
			if(i>d)	printf("%d",x=a*0.1+a*0.075+b*0.05+b*0.03+(i-d)*0.015);
			else	printf("%d",x=a*0.1+a*0.075+b*0.05+b*0.03);
			break;
		}
		case 10:	
		default :{
			if(i>e) printf("%d",x=a*0.1+a*0.075+b*0.05+b*0.03+c*0.015+(i-e)*0.01);
			else	printf("%d",x=a*0.1+a*0.075+b*0.05+b*0.03+c*0.015);
			break;
		}	
	}
	return 0;
}
