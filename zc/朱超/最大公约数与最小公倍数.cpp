#include<stdio.h>
int main() {
	int m,n,f,t;
	scanf("%d %d",&m,&n);
	if(m>n)
	f=n;
	else
	f=m;
	for(; f>0; f--) {
		if(m%f==0&&n%f==0) {
			printf("%d ",f);
			break;
		}
	}
	t=m*n/f;
	printf("%d",t);
	return 0;
}
