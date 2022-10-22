#include <stdio.h>
#include <math.h>

int main()
{
	int T;
	int x1[1000], y1[1000], r1[1000], x2[1000], y2[1000], r2[1000];
	int res[1000];
	double len;

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &x1[i], &y1[i], &r1[i], &x2[i], &y2[i], &r2[i]);
	}
	for (int i = 0; i < T; i++)
	{
		if (x1[i] == x2[i] && y1[i] == y2[i])
		{
			if (r1[i] == r2[i])
				res[i] = -1;
			else
				res[i] = 0;
		}
		else
		{
			len = sqrt(pow(x2[i] - x1[i], 2) + pow(y2[i] - y1[i], 2));
			if (len > r1[i] + r2[i] || len < abs(r2[i] - r1[i]))
				res[i] = 0;
			else if ((len == r1[i] + r2[i]) || (len == abs(r2[i] - r1[i])))
				res[i] = 1;
			else
				res[i] = 2;
		}
	}

	for (int i = 0; i < T; i++)
	{
		printf("%d\n", res[i]);
	}
}