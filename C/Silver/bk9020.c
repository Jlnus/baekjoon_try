#include <stdio.h>

int prime(int n)
{
	if (n == 2 || n == 3)
		return 0;

	if (n % 2 == 0 || n % 3 == 0 || n == 1)
		return (1);
	for (int j = 5; j <= n / j; j += 2)
	{
		if (n % j == 0)
		{
			return 1;
		}
	}
	return (0);
}

int main()
{
	int T, n, min, sub, p;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &n);
		min = 10000;
		sub = 10000;
		if (n == 4)
		{
			printf("2 2\n");
			continue;
		}
		for (int j = 3; j <= n / 2; j += 2)
		{

			if (prime(j) == 0 && prime(n - j) == 0)
				sub = n - j - j;
			if (min > sub)
			{
				p = j;
				min = sub;
			}
		}
		printf("%d %d\n", p, n - p);
	}
}