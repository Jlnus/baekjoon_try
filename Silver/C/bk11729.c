#include <stdio.h>
void print(int N)
{
	if (N == 1)
	{
		print("1 3\n");
		return;
	}
	print(N - 1);
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
	print(N);
}