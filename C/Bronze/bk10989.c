#include <stdio.h>

int main(c)
{
	int N[10001] = {0}, tmp = 0;
	for (int i = scanf("%d", &c) - 1; i < c; i++)
	{
		scanf("%d", &tmp);
		N[tmp] += 1;
	}

	for (int i = 0; i < 10001; i++)
	{
		for (; N[i] != 0; N[i] -= 1)
			printf("%d\n", i);
	}
}