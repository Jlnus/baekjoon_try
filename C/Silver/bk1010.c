#include <stdio.h>

int main()
{
	int T, N, M, tmp;
	double a;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &N, &M);
		tmp = N;
		a = 1;
		for (int i = M; i > M - N; i--)
		{
			a *= i;
			a /= tmp;
			tmp--;
		}
		printf("%.0lf\n", a);
	}
}