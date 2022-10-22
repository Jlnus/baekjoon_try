#include <stdio.h>
#include <string.h>

int main()
{
	char A[10001], B[10001];
	int num[10001] = {0};
	int max, lA, lB, i = 0;

	scanf("%s %s", A, B);
	lA = strlen(A);
	lB = strlen(B);
	max = (lA > lB) ? lA : lB;
	max += 1;
	while (lA > 0)
	{
		num[max - 1 - i] = A[lA - 1] - '0';
		i++;
		lA--;
	}
	i = 0;
	while (lB > 0)
	{
		num[max - 1 - i] += B[lB - 1] - '0';
		i++;

		lB--;
	}

	for (int i = 0; i < max; i++)
	{
		if (num[max - 1 - i] > 9)
		{
			num[max - 1 - i] %= 10;
			num[max - 2 - i] += 1;
		}
	}
	i = 0;
	while (num[i] == 0)
		i++;
	while (max > i)
	{
		printf("%d", num[i]);
		i++;
	}
}