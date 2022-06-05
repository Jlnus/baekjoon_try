#include <stdio.h>

int prime(int n)
{
	if (n == 2)
		return 2;
	if (n == 3)
		return 3;
	if (n % 2 == 0 || n % 3 == 0 || n == 1)
		return (0);
	for (int j = 5; j <= n / j; j += 2)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return (n);
}
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++)
	{
		if (prime(i) != 0)
			printf("%d\n", i);
	}
}