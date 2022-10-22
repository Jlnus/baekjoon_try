#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char result[500000][21];

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}

int binsearch(char (*data)[21], int n, char key[21])
{
	int low = 0, high = n - 1, mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (strcmp(key, data[mid]) == 0)
			return mid;
		else if (strcmp(key, data[mid]) < 0)
			high = mid - 1;
		else if (strcmp(key, data[mid]) > 0)
			low = mid + 1;
	}
	return -1;
}
int main()
{
	int N, M, cnt = 0, index;
	scanf("%d %d", &N, &M);
	char A[N][21], tmp[21];
	for (int i = 0; i < N; i++)
	{
		scanf("%s", A[i]);
	}
	qsort(A, sizeof(A) / sizeof(A[0]), sizeof(A[0]), compare);
	for (int i = 0; i < M; i++)
	{
		scanf("%s", tmp);
		index = binsearch(A, N, tmp);
		if (index >= 0)
		{
			strcpy(result[cnt], A[index]);
			cnt++;
		}
	}
	qsort(result, cnt, sizeof(result[0]), compare);
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++)
	{
		printf("%s\n", result[i]);
	}
}