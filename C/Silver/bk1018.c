#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	char board[N][M];

	for (int i = 0; i < N; i++)
	{
		scanf("%s", board[i]);
	}

	int sum;

	for (int i = 0; i + 8 <= N; i++)
	{
		for (int j = 0; j + 8 <= M; i++)
		{
			sum += board[i][j]
		}
	}
}