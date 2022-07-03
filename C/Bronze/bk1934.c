#include <stdio.h>

int main()
{
	int t, a, b, max;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		for (int i = 1; i <= a && i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
				max = i;
		}
		printf("%d\n", a * b / max);
	}
}