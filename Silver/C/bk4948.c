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
	int n, cnt;

	while (1)
	{
		cnt = 0;
		scanf("%d", &n);
		if (n == 0)
			return 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (prime(i) == 0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
}