#include <stdio.h>

int main()
{
	int n[10] = {0}, index = 1, tmp;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		n[i] = n[i] % 42;
	}
	for (int i = 1; i < 10; i++)
	{
		tmp = 0;
		for (int j = i - 1; j >= 0; j--)
		{
			if (n[i] == n[j])
				tmp = 1;
		}
		if (tmp == 0)
			index++;
	}
	printf("%d", index);
}