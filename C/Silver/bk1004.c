#include <stdio.h>
#include <math.h>

int main()
{
	int T = 0;
	int n[1000];
	int x1[1000], y1[1000], x2[1000], y2[1000];
	int cx[1000][100], cy[1000][100], r[1000][100];
	int res[1000];

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
		scanf("%d", &n[i]);
		for (int j = 0; j < n[i]; j++)
		{
			scanf("%d %d %d", &cx[i][j], &cy[i][j], &r[i][j]);
		}
	}

	for (int i = 0; i < T; i++)
	{
		res[i] = 0;
		for (int j = 0; j < n[i]; j++)
		{
			if ((pow(x1[i] - cx[i][j], 2) + pow(y1[i] - cy[i][j], 2)) < pow(r[i][j], 2))
				res[i]++;
			if ((pow(x2[i] - cx[i][j], 2) + pow(y2[i] - cy[i][j], 2)) < pow(r[i][j], 2))
				res[i]++;
			if ((pow(x1[i] - cx[i][j], 2) + pow(y1[i] - cy[i][j], 2)) < pow(r[i][j], 2) &&
				(pow(x2[i] - cx[i][j], 2) + pow(y2[i] - cy[i][j], 2)) < pow(r[i][j], 2))
				res[i] -= 2;
		}
	}

	for (int i = 0; i < T; i++)
	{
		printf("%d\n", res[i]);
	}
}