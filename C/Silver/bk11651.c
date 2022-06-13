#include <stdio.h>
#include <stdlib.h>

int compare(long long *a, long long *b)
{
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}
int main()
{
	int N;
	long long sum[100000], x, y;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lld %lld", &x, &y);
		sum[i] = (y + 100000) * 1000000 + x + 100000;
	}
	qsort(sum, N, sizeof(long long), compare);

	for (int i = 0; i < N; i++)
	{
		printf("%lld ", sum[i] % 1000000 - 100000);
		printf("%lld\n", sum[i] / 1000000 - 100000);
	}
}