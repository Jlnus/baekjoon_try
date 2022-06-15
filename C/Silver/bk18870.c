#include <stdio.h>

int tmp[1000000];

void merge(int arr[], int start, int middle, int end)
{
	int i = start;
	int j = middle + 1;
	int k = start;

	while (i <= middle && j <= end)
	{
		if (arr[i] <= arr[j])
			tmp[k] = arr[i++];
		else
			tmp[k] = arr[j++];
		k++;
	}
	if (i > middle)
	{
		for (int t = j; t <= end; ++t)
		{
			tmp[k] = arr[t];
			++k;
		}
	}
	else
	{
		for (int t = i; t <= middle; ++t)
		{
			tmp[k] = arr[t];
			++k;
		}
	}

	for (int t = start; t <= end; ++t)
	{
		arr[t] = tmp[t];
	}
}

void mergesort(int arr[], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;
		mergesort(arr, start, middle);
		mergesort(arr, middle + 1, end);
		merge(arr, start, middle, end);
	}
}

int binsearch(int x[], int rank[][2], int n, int key)
{
	int low, high;
	int mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == x[mid])
		{ //탐색 성공
			return rank[mid][1];
		}
		else if (key < x[mid])
		{ //탐색 범위를 아래쪽으로
			high = mid - 1;
		}
		else if (key > x[mid])
		{ //탐색 범위를 위쪽으로
			low = mid + 1;
		}
	}
	return -1; //탐색 실패
}

int main()
{
	int N;
	scanf("%d", &N);
	int x[N], rank[N][2], index = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
		rank[i][0] = x[i];
	}
	mergesort(x, 0, N - 1);
	rank[0][1] = 0;
	for (int i = 1; i < N; i++)
	{
		if (x[i - 1] != x[i])
			index++;
		rank[i][1] = index;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", binsearch(x, rank, N, rank[i][0]));
	}
}