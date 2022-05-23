#include <stdio.h>

int main()
{
	char str[1000001] = {0};
	int alp[26];
	char c;

	for (int i = 0; i < 26; i++)
	{
		alp[i] = 0;
	}
	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i];
			alp[c - 'a'] += 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i];
			alp[c - 'A'] += 1;
		}
	}
	int max = 0;
	int max_index = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max < alp[i])
		{
			max = alp[i];
			max_index = i;
		}
		else if (max == alp[i])
		{
			max_index = -1;
		}
	}

	if (max_index == -1)
		printf("?\n");
	else
		printf("%c\n", max_index + 65);
}