#include <stdio.h>

void star(int n, int x, int y)
{
	if (x == n)
	{
		puts("");
		star(n, 0, y + 1);
	}
	else if (y == n)
	{
		return;
	}
	else if ((x >= n / 3 && x <= n * 2 / 3 - 1) && (y >= n / 3 && y <= n * 2 / 3 - 1))
	{
		printf(" ");
		x++;
		star(n, x, y);
	}
	else if (x % 3 == 1 && y % 3 == 1)
	{
		printf(" ");
		x++;
		star(n, x, y);
	}
	else
	{
		printf("*");
		x++;
		star(n, x, y);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	star(n, 0, 0);
}