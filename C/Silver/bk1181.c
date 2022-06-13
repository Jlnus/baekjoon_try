#include <stdio.h>
#include <string.h>

char tmp[20001][51];

int compare(char *a, char *b)
{
	if (strlen(a) > strlen(b))
		return 1;
	else if (strlen(a) < strlen(b))
		return -1;
	else
		return strcmp(a, b);
}
void merge(char (*arr)[51], int start, int middle, int end)
{
	int i = start;
	int j = middle + 1;
	int k = start;

	while (i <= middle && j <= end)
	{
		if (compare(arr[i], arr[j]) < 0)
			strcpy(tmp[k], arr[i++]);
		else
			strcpy(tmp[k], arr[j++]);
		k++;
	}

	if (i > middle)
	{
		for (int t = j; t <= end; ++t)
		{
			strcpy(tmp[k], arr[t]);
			++k;
		}
	}
	else
	{
		for (int t = i; t <= middle; ++t)
		{
			strcpy(tmp[k], arr[t]);
			++k;
		}
	}

	for (int t = start; t <= end; ++t)
	{
		strcpy(arr[t], tmp[t]);
	}
}

void mergesort(char (*arr)[51], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;
		mergesort(arr, start, middle);
		mergesort(arr, middle + 1, end);
		merge(arr, start, middle, end);
	}
}
int main()
{
	int N, cnt = 0;
	scanf("%d", &N);
	char A[N][51];

	for (int i = 0; i < N; i++) // 중복 체크
	{
		scanf("%s", tmp[0]);
		for (int j = 0; j <= i; j++)
		{
			if (strcmp(tmp[0], A[j]) == 0)
				break;
			else if (j == i)
			{
				strcpy(A[cnt], tmp[0]);
				cnt++;
				break;
			}
		}
	}
	mergesort(A, 0, cnt - 1);
	for (int i = 0; i < cnt; i++)
	{
		printf("%s\n", A[i]);
	}
	return 0;
}