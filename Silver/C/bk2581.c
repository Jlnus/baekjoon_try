#include <stdio.h>

int main()
{
	int m, n, tmp, min = 10000, prime = 0; // 0 < m <= n <10000
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++)
	{
		tmp = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				tmp++;
				break;
			}
		}
		if (tmp == 0 && i != 1)
		{
			prime += i;
			min = (min < i ? min : i);
		}
	}
	if (prime == 0)
	{
		printf("-1");
		return 0;
	}
	printf("%d\n%d\n", prime, min);
}