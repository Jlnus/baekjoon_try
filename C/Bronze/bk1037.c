#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int N, min = 1000000, max = 2;
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &N);
		min = min < N ? min : N;
		max = max > N ? max : N;
	}
	printf("%d\n", min * max);
}