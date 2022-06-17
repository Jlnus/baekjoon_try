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
			return mid;
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
	return -1; //탐색 실패
}

int usearch(int data[], int n, int key)
{

	int mid = n / 2;
	int cnt = 0;
	while (mid < n)
	{
		if (key == data[mid])
		{ //탐색 성공
			cnt++;
			mid++;
		}
		else if (key > data[mid])
		{ //탐색 범위를 아래쪽으로
			return cnt;
		}
		else if (key < data[mid])
		{ //탐색 범위를 아래쪽으로
			mid++;
		}
	}
	return 0; //탐색 실패
}

int dsearch(int data[], int n, int key)
{

	int mid = n / 2 - 1;
	int cnt = 0;
	while (mid >= 0)
	{
		if (key == data[mid])
		{ //탐색 성공
			cnt++;
			mid--;
		}
		else if (key > data[mid])
		{ //탐색 범위를 아래쪽으로
			return cnt;
		}
		else if (key < data[mid])
		{ //탐색 범위를 아래쪽으로
			mid--;
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
	scanf("%d", &M);
	int find[M], unit[M];
	for (int i = 0; i < M; i++)
	{
		unit[i] = 0;
		scanf("%d", &find[i]);
	}
	qsort(num, N, sizeof(int), compare);
	int tmp;
	for (int i = 0; i < M; i++)
	{
		tmp = 0;
		tmp += usearch(num, N, find[i]);
		tmp += dsearch(num, N, find[i]);
		printf("%d ", tmp);
	}
	/*
	for (int i = 0; i < M; i++)
	{
		printf("%d ", unit[i]);
	}
	*/
}