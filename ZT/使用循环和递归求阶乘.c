#include<stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
	int num; 
	printf("This is program calculates factorials.\n");
	printf("Enter a value in the range 0-12(q to quit ):\n");
	while(scanf("%d",&num)==1)
	{
		if(num<0) printf("NO negative numbers,please.\n");
		else if(num>12) printf("Keep input under 12.\n");
		else 
		{
			printf("loop:%d factorial =%ld\n",num,fact(num));
			printf("recursion:%d factorial =%ld\n",num,rfact(num));
		}
		printf("Enter a value in the ranger 0-12(q to quit ):\n");
	}
	printf("bye.\n");
	
	return 0;
}

long fact(int n)//Ñ­»· 
{
	long ans;
	
	for(ans=1;n>1;n--)
	ans*=n;
	return ans; 
}

long rfact(int n)//µÝ¹é 
{
	long ans;
	if(n>0) ans=n*rfact(n-1);
	else ans=1;
	return ans;
}
