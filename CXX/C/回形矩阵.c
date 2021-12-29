#include <stdio.h>
void hui();
int k = 1, q = 0;
int n, m;
int a[100][100] = {0};
int main()
{
	int i, j;
	scanf("%d%d", &n, &m);
	hui();
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void hui()
{
	int j, i, h, t;
	for (i = q; i < m - q; i++)
	{
		a[q][i] = k++;
	}
	for (j = q + 1; j < n - q - 1; j++)
	{
		a[j][m - q - 1] = k++;
	}
	for (h = n - q - 1; h > q; h--)
	{
		a[n - q - 1][h] = k++;
	}
	for (t = n - q - 1; t > q; t--)
	{
		a[t][q] = k++;
	}

	if (a[(int)n / 2][(int)m / 2] == 0)
	{
		q++;
		hui();
	}
}
