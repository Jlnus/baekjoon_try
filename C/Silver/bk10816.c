#include <stdio.h>
#include <stdlib.h>

int compare(void *first, void *second)
{
	return *(int *)first - *(int *)second;
}

int usearch(int data[], int n, int key)
{

	int mid = n / 2;
	int cnt = 0;
	while (mid < n)
	{
		if (key == data[mid])
		{
			cnt++;
			mid++;
		}
		else if (key < data[mid])
		{
			return cnt;
		}
		else if (key > data[mid])
		{
			mid++;
		}
	}
	return cnt;
}

int dsearch(int data[], int n, int key)
{

	int mid = n / 2 - 1;
	int cnt = 0;
	while (mid >= 0)
	{
		if (key == data[mid])
		{
			cnt++;
			mid--;
		}
		else if (key > data[mid])
		{
			return cnt;
		}
		else if (key < data[mid])
		{
			mid--;
		}
	}
	return cnt;
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