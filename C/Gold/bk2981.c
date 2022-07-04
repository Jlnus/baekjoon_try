#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b) // 비교함수
{
	return (*(int *)a - *(int *)b);
}

int gcd(int a, int b) // 유클리드 호제법(최대공약수)
{
	return b ? gcd(b, a % b) : a;
}

int main()
{
	int N, tmp = 0;
	scanf("%d", &N);
	int num[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		if (i == 1)
		{
			tmp = abs(num[1] - num[0]);
		}
		if (i > 1)
		{
			tmp = gcd(tmp, abs(num[i - 1] - num[i]));
		}
	}

	int other[(int)sqrt(tmp) * 2], index = 0;
	other[0] = tmp;
	for (int i = 2; i <= sqrt(tmp); i++) // 약수 출력
	{
		if (tmp % i == 0)
		{
			printf("%d ", i);
			if (i * i == tmp)
				break;
			other[++index] = tmp / i;
		}
	}
	for (int i = index; i >= 0; i--)
	{
		printf("%d ", other[i]);
	}
}