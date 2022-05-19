#include <stdio.h>

int main()
{
	int A, B, C; // 100 < 1000
	int num, n = 0;
	int unit[10] = {0};

	scanf("%d %d %d", &A, &B, &C);
	num = A * B * C;
	for (int i = num; i != 0; n++)
	{
		i = i / 10;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == num % 10)
				unit[j]++;
		}
		num /= 10;
	}
	for (int j = 0; j <= 9; j++)
	{
		printf("%d\n", unit[j]);
	}
}