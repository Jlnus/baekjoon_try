#include <stdio.h>

int main()
{
	int T, H, W, N;

	scanf("%d", &T);
	int res[T];
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);

		res[i] = ((N - 1) / H) + 1 + 100 * ((N - 1) % H + 1);
	}

	for (int i = 0; i < T; i++)
	{
		printf("%d\n", res[i]);
	}
}