#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}

int binsearch(char (*data)[501], int n, char key[501])
{
	int low, high;
	int mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (strcmp(key, data[mid]) == 0)
		{ //탐색 성공
			return 1;
		}
		else if (strcmp(key, data[mid]) < 0)
		{ //탐색 범위를 아래쪽으로
			high = mid - 1;
		}
		else if (strcmp(key, data[mid]) > 0)
		{ //탐색 범위를 위쪽으로
			low = mid + 1;
		}
	}
	return 0; //탐색 실패
}

int main()
{
	int N, M, cnt = 0;
	scanf("%d %d", &N, &M);
	char S[N][501], find[501];
	for (int i = 0; i < N; i++)
	{
		scanf("%s", S[i]);
	}
	qsort(S, sizeof(S) / sizeof(S[0]), sizeof(S[0]), compare);

	for (int i = 0; i < M; i++)
	{
		scanf("%s", find);
		cnt += binsearch(S, N, find);
	}
	printf("%d\n", cnt);
}