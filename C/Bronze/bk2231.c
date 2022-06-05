#include <stdio.h>

int main()
{
	int N, sum, tmp;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		sum = i;
		tmp = i;
		while (tmp != 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if (N == sum)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
}