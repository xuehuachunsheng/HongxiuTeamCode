#include<stdio.h>
int Fibonacci(int n){
	if(n>=1&&n<=39){
        if(n==1||n==2)
		    return 1;
	    else
		    return (Fibonacci(n-1)+Fibonacci(n-2));
    }
    return 0;
}

int main(void){
	int x;
	scanf("%d",&x);
	printf("%d",Fibonacci(x));
	return 0;
}

