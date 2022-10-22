#include <stdio.h>

int gcd(int a, int b) // 최대공약수
{
	return b ? gcd(b, a % b) : a;
}

int main()
{
	int N;
	scanf("%d", &N);
	int r, new;
	scanf("%d", &r);
	for (int i = 0; i < N - 1; i++)
	{
		scanf("%d", &new);
		printf("%d/%d\n", r / gcd(r, new), new / gcd(r, new));
	}
}