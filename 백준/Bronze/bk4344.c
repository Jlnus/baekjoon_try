#include <stdio.h>

int main()
{
	int C, N, tmp, mean, index;
	int score[1000];
	float result[1000];
	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		tmp = 0;
		mean = 0;
		index = 0;
		scanf("%d", &N);
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &score[j]);
			tmp += score[j];
		}
		mean = (float)tmp / N;
		for (int j = 0; j < N; j++)
		{
			if (score[j] > mean)
				index++;
		}
		result[i] = ((float)index / N) * 100;
	}
	for (int i = 0; i < C; i++)
	{
		printf("%.3f%%\n", result[i]);
	}
}