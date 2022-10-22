#include <stdio.h>
#include <math.h>

int board[50][50];
int N, M;

int check(char input[N][M], int a, int b)
{
	int cnt = 0;
	for (int i = a; i < a + 8; i++)
	{
		for (int j = b; j < b + 8; j++)
		{
			cnt += abs(board[i][j] - input[i][j]); // 정해진 판과 입력값의 차이
		}
	}
	cnt /= 21;								   // 두 값이 다른 경우의 차로 나눔 => 바꿔야할 것의 갯수
	cnt = (64 - cnt) > cnt ? cnt : (64 - cnt); // 정반대 판의 경우와 비교해서 작은값
	return cnt;
} //

int main()
{
	for (int i = 0; i < 50; i++) // 체스판 임의 설정
	{
		for (int j = 0; j < 50; j++)
		{
			if (i % 2 != j % 2)
				board[i][j] = 'B';
			else
				board[i][j] = 'W';
		}
	}

	scanf("%d %d", &N, &M);
	char input[N][M];

	for (int i = 0; i < N; i++)
	{
		scanf("%s", input[i]);
	}

	int min = 35, sum;

	for (int i = 0; i + 8 <= N; i++)
	{
		for (int j = 0; j + 8 <= M; j++)
		{
			sum = check(input, i, j);
			min = (sum < min) ? sum : min;
		}
	}

	printf("%d", min);
}