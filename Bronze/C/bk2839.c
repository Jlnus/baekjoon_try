#include <stdio.h>

int main()
{
	int N, B = 0, min;

	scanf("%d", &N);

	B = N / 3;

	int res[B + 1];
	for (int i = 0; i <= B; i++)
	{

		if ((N - 3 * i) % 5 == 0)
		{
			res[i] = i + (N - 3 * i) / 5;
		}
		else
			res[i] = 1700;
	}
	min = res[0];
	for (int i = 0; i <= B; i++)
	{
		if (res[i] > 0 && min > res[i])
			min = res[i];
	}
	if (min == 1700)
		printf("-1");
	else
		printf("%d", min);
}