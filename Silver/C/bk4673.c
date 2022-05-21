#include <stdio.h>

int dn(int n)
{
	int sum, i = 0;

	sum = n;
	while (n != 0)
	{
		sum += n % 10;
		n = n / 10;
		i++;
	}
	return (sum);
}

int main()
{
	int search = 0;
	int unit[10000] = {0};
	for (int i = 0; i < 10000; i++)
	{
		unit[i] = 1;
	}
	for (int i = 0; i < 10000; i++)
	{
		search = dn(i);
		if (search <= 10000)
			unit[search] = 2;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (unit[i] == 1)
			printf("%d\n", i);
	}
}