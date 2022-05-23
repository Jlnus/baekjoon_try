#include <stdio.h>
int main()
{
	int T, R, k;
	char str[1000];
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %s", &R, str);
		k = 0;
		while (str[k] != 0)
		{
			for (int j = 0; j < R; j++)
			{
				printf("%c", str[k]);
			}
			k++;
		}
		printf("\n");
	}
}