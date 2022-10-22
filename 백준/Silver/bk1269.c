#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int binsearch(int data[], int n, int key)
{
	int low = 0, high = n - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == data[mid])
			return 1;
		else if (key < data[mid])
			high = mid - 1;
		else if (key > data[mid])
			low = mid + 1;
	}
	return 0;
}

int main()
{
	int N, M, find, cnt = 0;
	scanf("%d %d", &N, &M);
	int A[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	cnt = N + M;
	qsort(A, N, sizeof(int), compare);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &find);
		if (binsearch(A, N, find) == 1)
			cnt -= 2;
	}
	printf("%d", cnt);
}