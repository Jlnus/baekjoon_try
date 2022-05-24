#include <stdio.h>

int comb(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	else
		return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main()
{
	int T, k, N;
	scanf("%d", &T);
	int cnt[T];
	for (int i = 0; i < T; i++)
	{

		scanf("%d", &k);
		scanf("%d", &N);
		cnt[i] = comb(N + k, k + 1);
	}
	for (int i = 0; i < T; i++)
	{
		printf("%d\n", cnt[i]);
	}
}