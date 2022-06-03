#include <stdio.h>

int hanoi(int N);

void print(int N, int i)
{
	int sum, t;

	if (N % 2 == 0)
	{
		sum = 1;
		t = i / 2;
	}
	else
	{
		sum = 2;
		t = i;
	}
	if (N == 1)
		printf("1 3\n");
	else if (i % 2 == 0)
		printf("%d %d\n", t % 3 + 1, (t + sum) % 3 + 1);
	else
		print(N - 1, (i - 1) / 2);
}

int hanoi(int N)
{
	int cnt;
	if (N == 1)
		return 1;
	cnt = 2 * hanoi(N - 1) + 1;
	return cnt;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d\n", hanoi(N));
	for (int i = 0; i < hanoi(N); i++)
		print(N, i);
}