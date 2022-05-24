#include <stdio.h>
int main()
{
	int N, cnt = 0;
	char str[101];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", str);
		for (int j = 0; str[j] != 0; j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (str[j] == str[k] && str[j] != str[k + 1])
				{
					cnt++;
					goto point;
				}
			}
		}
	point:;
	}
	cnt = N - cnt;
	printf("%d\n", cnt);
}