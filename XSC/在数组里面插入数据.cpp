#include<stdio.h>
int main(void) {
	int a[10]= {},b,j=9;
	for(b=0; b<9; b++)
		scanf("%d ",&a[b]);
	putchar('\n');
	scanf("%d",&b);
	a[9]=b;
	for(int c; j>=0; j--) {
		if(a[j]<a[j-1]) {
			c=a[j-1],a[j-1]=a[j],a[j]=c;
		}
	}
	for(j=0; j<10; j++)
		printf("%d\n",a[j]);

	return 0;
}
