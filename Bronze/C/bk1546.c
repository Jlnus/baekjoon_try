#include <stdio.h>

int main()
{
	int N, max = 0;
	float mean = 0;

	scanf("%d", &N);

	float score[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%f", &score[i]);
	}
	for (int i = 0; i < N; i++)
	{
		max = (max > score[i]) ? max : score[i];
	}
	for (int i = 0; i < N; i++)
	{
		score[i] = (score[i] / max) * 100;
		mean += score[i];
	}
	mean = mean / N;
	printf("%f", mean);
}
