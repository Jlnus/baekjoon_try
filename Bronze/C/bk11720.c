#include <stdio.h>

int main()
{
	int N, total = 0;

	scanf("%d", &N);
	char num[N];
	scanf("%s", num);
	for (int i = 0; i < N; i++)
	{
		total += num[i] - 48;
	}
	printf("%d\n", total);
}