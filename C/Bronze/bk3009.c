#include <stdio.h>
#include <math.h>

int compare(int a, int b, int c)
{
	if (a == b)
		return c;
	if (b == c)
		return a;
	return b;
}

int main()
{
	int x1, y1, x2, y2, x3, y3;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	printf("%d %d", compare(x1, x2, x3), compare(y1, y2, y3));
}
