#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}

int main()
{
	int n, index = 0;
	char s[1001];
	scanf("%s", s);
	n = strlen(s);
	n = n * (n + 1) / 2;
	char part[n][1001];
	for (int i = 1; i <= strlen(s); i++)
	{
		for (int j = 0; j <= strlen(s) - i; j++)
		{
			strncpy(part[index], s + j, i);
			part[index][i] = 0;
			index++;
		}
	}
	qsort(part, n, sizeof(part[0]), compare);
	for (int i = 0; i < n - 1; i++)
	{
		if (strcmp(part[i], part[i + 1]) == 0)
			index--;
	}
	printf("%d", index);
}
