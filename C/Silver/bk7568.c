#include <stdio.h>

int size[50][2];
int rank[50];
int minh = 300, minw = 300;

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &size[i][0], &size[i][1]);
		rank[i] = N;
	}
	int sum;
	for (int i = 0; i < N; i++)
	{
		sum = 1;
		for (int j = 0; j < N; j++)
		{
			if (j == i)
				j++;
			if (size[j][0] > size[i][0] && size[j][1] > size[i][1])
				sum++;
		}
		rank[i] = sum;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", rank[i]);
	}
}