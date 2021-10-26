#include<stdio.h>
#include<math.h>
int main() {
	int i,j,x,a,b;
	for(x=10; x<1000; x++) {
		if(x<100)
			a=x/10;
		else
			a=x/100;
		b=x%10;
		j=sqrt(x);
		for(i=2; i<=j; i++) {
			if(x%i==0)
				break;
		}
		if(i>j&&a==b)
			printf("»ØÎÄËØÊı£»%5d\n",x);
		else
			continue;
	}
	return 0;
}

