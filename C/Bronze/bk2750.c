#include <stdio.h>

int N[1000], c = 0, tmp = 0;
int main()
{
	for (int i = scanf("%d", &c) - 1; ~scanf("%d", &N[i]); i++)
	{
	}

	for (int i = 1; i < c; i++)
	{
		for (int j = 0; j < c - 1; j++)
		{
			if (N[j] > N[j + 1])
			{
				tmp = N[j];
				N[j] = N[j + 1];
				N[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < c; i++)
	{
		printf("%d ", N[i]);
	}
}