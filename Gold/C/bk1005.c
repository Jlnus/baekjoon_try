#include <stdio.h>

/*
int maxtime(int **total)

{
}
*/

// segmant 오류, 하나씩 돌려볼 것, 예제 마지막 이용
void get_time(int (*rule)[2], int W, int (*total)[1000], int *a, int b)
{

	for (int i = 0; rule[i][0] != 0; i++)
	{

		if (rule[i][1] == W)
		{
			total[*a][b] = rule[i][0];
			b++;

			get_time(rule, rule[i][0], total, a, b);
		}
	}
	*a += 1;
}

int read_rule()
{
	int K, N, W, a = 0;
	int res = 0;
	int t[1001]; // 각 건물 설치 시간(N)
	int rule[100001][2] = {0};

	scanf("%d %d", &N, &K); // N 건물 개수, K 규칙 개수
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &t[i]);
	}
	for (int i = 0; i < K; i++)
	{
		scanf("%d %d", &rule[i][0], &rule[i][1]);
	}
	scanf("%d", &W); // 필수 설치 건물

	int total[K][1000];
	get_time(rule, W, total, &a, 0);
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", total[i][j]);
		}
		printf("\n");
	}
	//	res = maxtime(total);
	return (res);
}

int main()
{
	int T;
	int res[1000];
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		res[i] = read_rule();
	}
	for (int i = 0; i < T; i++)
	{
		printf("%d\n", res[i]);
	}
	return 0;
}