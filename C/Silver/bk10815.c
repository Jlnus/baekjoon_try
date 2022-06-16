#include <stdio.h>
#include <stdlib.h>

int compare(void *first, void *second)
{
	if (*(int *)first > *(int *)second)
		return 1;
	else if (*(int *)first < *(int *)second)
		return -1;
	else
		return 0;
}

int binsearch(int data[], int n, int key)
{
	int low, high;
	int mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == data[mid])
		{ //탐색 성공
			return 1;
		}
		else if (key < data[mid])
		{ //탐색 범위를 아래쪽으로
			high = mid - 1;
		}
		else if (key > data[mid])
		{ //탐색 범위를 위쪽으로
			low = mid + 1;
		}
	}
	return 0; //탐색 실패
}

int main()
{
	int N, M;
	scanf("%d", &N);
	int num[N];
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	qsort(num, N, sizeof(int), compare);
	scanf("%d", &M);
	int find[M];
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &find[i]);
		printf("%d ", binsearch(num, N, find[i]));
	}
}