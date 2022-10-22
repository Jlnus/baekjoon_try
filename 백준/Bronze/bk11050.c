#include <stdio.h>

int fact(int a)
{
	if (a == 0)
		return 1;
	return a * fact(a - 1);
}

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	printf("%d", fact(N) / fact(K) * fact(N - K));
}