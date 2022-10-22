#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, w, h, min, col, row;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	row = abs(x - w) < x ? abs(x - w) : x;
	col = abs(y - h) < y ? abs(y - h) : y;

	if (x > w && y > h)
	{
		printf("%d", sqrt(row * row + col * col));
		return 0;
	}
	min = row > col ? col : row;
	printf("%d", min);
}
