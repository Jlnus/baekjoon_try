#include <stdio.h>

int main()
{
	int N, cnt = 1, i;
	scanf("%d", &N);

	for (i = 0; cnt < N; i++)
	{
		cnt += 6 * i;
	}
	if (N == 1)
		i = 1;

	printf("%d", i);
}