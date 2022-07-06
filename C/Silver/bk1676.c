#include <stdio.h>

int main()
{
	int N, a = 0, b = 0, tmp;
	scanf("%d", &N);
	for (int i = N; i > 1; i--)
	{
		tmp = i;
		while (tmp % 2 == 0)
		{
			tmp /= 2;
			a++;
		}
		while (tmp % 5 == 0)
		{
			tmp /= 5;
			b++;
		}
	}
	printf("%d", a > b ? b : a);
}