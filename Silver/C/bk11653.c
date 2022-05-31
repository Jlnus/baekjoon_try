#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 2; i <= N / i; i++)
	{

		if (N % i == 0 && i != N)
		{
			printf("%d\n", i);
			N = N / i;
			i = 1;
		}
	}
	printf("%d\n", N);
}