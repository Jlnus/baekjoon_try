#include <stdio.h>

int main()
{
	int a, b;
	int num[2][3] = {0};

	scanf("%d %d", &a, &b);
	for (int i = 0; i < 3; i++)
	{
		num[0][i] = a % 10;
		num[1][i] = b % 10;
		a /= 10;
		b /= 10;
	}
	a = num[0][0] * 100 + num[0][1] * 10 + num[0][2];
	b = num[1][0] * 100 + num[1][1] * 10 + num[1][2];
	printf("%d\n", (a > b) ? a : b);
}
