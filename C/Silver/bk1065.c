#include <stdio.h>

int main()
{
	int N, sub, i, total = 0, unit[3] = {0};

	scanf("%d", &N);
	if (0 < N && N < 100)
		total = N;
	else if (N == 1000)
		total = 144;
	else if (N >= 100 && N < 1000)
	{
		total = 99;
		for (N; N >= 100; N--)
		{
			i = N;
			unit[2] = i % 10;
			i = i / 10;
			unit[1] = i % 10;
			i = i / 10;
			unit[0] = i % 10;
			if (unit[2] - unit[1] == unit[1] - unit[0])
				total++;
		}
	}
	printf("%d\n", total);
}
