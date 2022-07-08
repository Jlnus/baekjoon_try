#include <stdio.h>

int main()
{
	int n, m, j, a = 0, b = 0, c, tmp;
	scanf("%d %d", &n, &m);
	c = n - m;
	n = (n / 5) * 5;
	m = (m / 5) * 5;
	for (int i = n; i > c; i -= 5)
	{
		tmp = i;
		while (tmp > 4)
		{
			tmp /= 5;
			b++;
		}
	}
	for (int i = m; i > 0; i -= 5)
	{
		j = m;
		while (j > 4)
		{
			j /= 5;
			b--;
		}
	}
	printf("%d", b);
}