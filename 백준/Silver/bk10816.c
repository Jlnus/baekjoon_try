#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second)
{
	return *(int *)first - *(int *)second;
}

int lower_bound(int arr[], int target, int size)
{
	int mid, start, end;
	start = 0, end = size;

	while (end > start)
	{
		mid = (start + end) / 2;
		if (arr[mid] >= target)
			end = mid;
		else
			start = mid + 1;
	}
	return end;
}

int upper_bound(int arr[], int target, int size)
{
	int mid, start, end;
	start = 0, end = size;

	while (end > start)
	{
		mid = (start + end) / 2;
		if (arr[mid] > target)
			end = mid;
		else
			start = mid + 1;
	}
	return end;
}

int main()
{
	int N, M;
	scanf("%d", &N);
	int num[N];
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	scanf("%d", &M);
	int find[M];
	for (int i = 0; i < M; i++)
		scanf("%d", &find[i]);
	qsort(num, N, sizeof(int), compare);
	for (int i = 0; i < M; i++)
		printf("%d ", upper_bound(num, find[i], N) - lower_bound(num, find[i], N));
}