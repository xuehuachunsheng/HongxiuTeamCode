#include<stdio.h>
#define n 10
int main() {
	int i;
	int arr[n]={};
	for(i=0; i<n; i++) {
		if((i+1)%6==0)
			printf("\n");
		printf("%5d",arr[i]);
		
	}
	printf("\n");
return 0;
} 
