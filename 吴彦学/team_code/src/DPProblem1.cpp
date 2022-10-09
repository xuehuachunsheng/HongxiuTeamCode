// 一道动态规划问题
// https://ac.nowcoder.com/acm/contest/42114/E
#include <stdio.h>
#include <stdlib.h>
int min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;
	if (b <= a && b <= c)
		return b;
	return c;
}

int main()
{
	int N = 996 + 7; // 996 + 7
	int* f = (int *)malloc(sizeof(int) * 366); // 优化Step 1. 固定长度为366 
	for (int i = 0; i < 7; ++i)
	{
		f[i] = 999999999;
	}
	f[7] = 1;
	f[31] = 1;
	f[365] = 1;
		
	for (int s = 8; s <= N; s++)
	{
		if (s < 31)
			f[s] = 1 + f[s - 7];
		else if (s < 365)
			f[s] = 1 + (f[s - 7] <= f[s - 31] ? f[s - 7] : f[s - 31]);
		else f[s % 365] = 1 + min(f[(s - 7) % 365], f[(s - 31) % 365], f[(s - 365) % 365]);
	}
	printf("%d", f[N % 365]);
	return 0;	
} 
