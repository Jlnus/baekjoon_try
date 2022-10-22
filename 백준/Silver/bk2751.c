#include <stdio.h>

int main(c)
{
	int N[2000001] = {0}, tmp = 0;
	for (int i = scanf("%d", &c) - 1; i < c; i++)
	{
		scanf("%d", &tmp);
		if (tmp < 0)
			N[tmp + 2000001] = 1;
		else
			N[tmp] = 1;
	}
	for (int i = 1000001; i < 2000001; i++)
	{
		N[i] && printf("%d ", (i - 2000001));
	}
	for (int i = 0; i < 1000001; i++)
	{
		N[i] && printf("%d ", i);
	}
}