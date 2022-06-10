#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num[10] = {0};
	char s[11];
	scanf("%s", s);

	for (int i = 0; s[i] != 0; i++)
	{
		num[s[i] - '0'] += 1;
	}
	for (int i = 9; i >= 0; i--)
	{
		while (num[i] != 0)
		{
			printf("%d", i);
			num[i]--;
		}
	}
}