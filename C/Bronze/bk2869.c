#include <stdio.h>

int main()
{
	long long A, B, V, len = 0, day = 0;
	scanf("%lld %lld %lld", &A, &B, &V);
	day = (V - A) / (A - B);
	len = day * (A - B);
	while (1)
	{
		day++;
		len += A;
		if (len >= V)
			break;
		len -= B;
	}
	printf("%lld", day);
}