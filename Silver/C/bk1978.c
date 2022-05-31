#include <stdio.h>

int main()
{
	int N, num, tmp, cnt = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		tmp = 0;
		scanf("%d", &num);
		for (int j = 2; j < num; j++)
		{
			if (num % j == 0)
			{
				tmp++;
				break;
			}
		}
		if (tmp == 0 && num != 1)
			cnt++;
	}
	printf("%d", cnt);
}