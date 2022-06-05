#include <stdio.h>

int main()
{
	int N, M, num[100], sum, max = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = num[i] + num[j] + num[k];
				if (sum <= M && sum > max)
					max = sum;
			}
		}
	}
	printf("%d", max);
}