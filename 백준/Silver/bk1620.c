#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char name[21];
	int num;
} STRUCT;

STRUCT list[100000];
char data[100000][21];

int compare(const void *a, const void *b)
{
	return strcmp(((STRUCT *)a)->name, ((STRUCT *)b)->name);
}

int binsearch(int n, char key[21])
{
	int low = 0, high = n - 1, mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (strcmp(key, list[mid].name) == 0)
			return list[mid].num;
		else if (strcmp(key, list[mid].name) < 0)
			high = mid - 1;
		else if (strcmp(key, list[mid].name) > 0)
			low = mid + 1;
	}
	return -1;
}

int main()
{
	int N, M;
	char tmp[21];
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", list[i].name);
		list[i].num = i + 1;
		strcpy(data[i], list[i].name);
	}
	qsort((STRUCT *)list, N, sizeof(STRUCT), compare);
	for (int i = 0; i < M; i++)
	{
		scanf("%s", tmp);
		if (tmp[0] >= '0' && tmp[0] <= '9')
			printf("%s\n", data[atoi(tmp) - 1]);
		else
			printf("%d\n", binsearch(N, tmp));
	}
}