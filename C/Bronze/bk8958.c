#include <stdio.h>

int main()
{
	int T, j = 0, tmp = 0;

	scanf("%d", &T);
	char s[T][90];
	int score[T];

	for (int i = 0; i < T; i++)
	{
		scanf("%s", s[i]);
		tmp = 0;
		score[i] = 0;
		j = 0;
		while (s[i][j] == 'O' || s[i][j] == 'X')
		{
			if (s[i][j] == 'O')
			{
				tmp++;
				score[i] += tmp;
			}
			else if (s[i][j] == 'X')
				tmp = 0;
			j++;
		}
	}
	for (int i = 0; i < T; i++)
	{
		printf("%d\n", score[i]);
	}
}