#include <stdio.h>

void star(int n, int x, int y)
{

	if (x == n)
	{
		puts("");
		star(n, 0, y + 1);
		return;
	}
	if (y == n)
	{
		return;
	}
	for (int i = n; i != 1; i /= 3)
	{
		if ((x % i >= i / 3 && x % i <= i * 2 / 3 - 1) &&
			(y % i >= i / 3 && y % i <= i * 2 / 3 - 1))
		{
			printf(" ");
			x++;
			star(n, x, y);
			return;
		}
	}
	printf("*");
	x++;
	star(n, x, y);
}

int main()
{
	int n;
	scanf("%d", &n);
	star(n, 0, 0);
}