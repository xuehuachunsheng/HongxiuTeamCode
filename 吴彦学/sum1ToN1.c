#include <stdio.h>

int main()
{
	int n = 100;
	int sum = 0;
	for(int i=1;i<=n;++i)
		sum += i;
	printf("1累加到%d的和=%d",n,sum);
	return 0;
}