#include<stdio.h>
int main(){
	int n;
	int i,j;
	printf("number:");
	scanf("%d",&n);
	printf("s= ");
	for(j=1;j<=n;j++){
		for(i=0;i<j;i++)
		printf("2");
	putchar('+');
	}
	printf("\b");
	return 0;
}

