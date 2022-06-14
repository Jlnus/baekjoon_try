#include <stdio.h>
#include <string.h>

char tmps[100000][101];
int tmp[100000];

void merge(int(*a), char (*b)[101], int start, int middle, int end)
{
	int i = start;
	int j = middle + 1;
	int k = start;

	while (i <= middle && j <= end)
	{
		if (a[i] <= a[j])
		{
			tmp[k] = a[i];
			strcpy(tmps[k], b[i++]);
		}
		else
		{
			tmp[k] = a[j];
			strcpy(tmps[k], b[j++]);
		}
		k++;
	}

	if (i > middle)
	{
		for (int t = j; t <= end; ++t)
		{
			tmp[k] = a[t];
			strcpy(tmps[k], b[t]);
			++k;
		}
	}
	else
	{
		for (int t = i; t <= middle; ++t)
		{
			tmp[k] = a[t];
			strcpy(tmps[k], b[t]);
			++k;
		}
	}

	for (int t = start; t <= end; ++t)
	{
		a[t] = tmp[t];
		strcpy(b[t], tmps[t]);
	}
}

void mergesort(int(*a), char (*b)[101], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;
		mergesort(a, b, start, middle);
		mergesort(a, b, middle + 1, end);
		merge(a, b, start, middle, end);
	}
}
int main()
{
	int N, a[100000];
	scanf("%d", &N);
	char b[N][101];
	for (int i = 0; i < N; i++)
	{
		scanf("%d %s", &a[i], b[i]);
	}
	mergesort(a, b, 0, N - 1);
	for (int i = 0; i < N; i++)
	{
		printf("%d %s\n", a[i], b[i]);
	}
}