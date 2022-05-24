#include <stdio.h>
int main()
{
	long long A, B, C, cnt = 0;
	scanf("%lld %lld %lld", &A, &B, &C);
	cnt = A / (C - B);
	if (B >= C)
		cnt = -1;
	else
		for (cnt; 1; cnt++)
		{
			if ((C - B) * cnt > A)
				break;
		}
	printf("%lld", cnt);
}
