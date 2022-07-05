#include <stdio.h>

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int arr[N + 1][N + 1];
	arr[0][0] = 1;
	arr[1][0] = 1;
	arr[1][1] = 1;

	for (int i = 2; i <= N; i++)
	{
		arr[i][0] = 1;
		for (int j = 1; j <= K; j++)
		{
			arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
		}
		arr[i][i] = 1;
	}
	printf("%d", arr[N][K]);
}
