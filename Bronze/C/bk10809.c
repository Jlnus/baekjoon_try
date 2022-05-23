#include <stdio.h>

int main()
{
	char str[100] = {0};
	int alp[26];
	int i = 0;
	char c;
	for (int i = 0; i < 26; i++)
	{
		alp[i] = -1;
	}

	scanf("%s", str);
	while (str[i] != 0)
	{
		c = str[i];
		if (alp[c - 97] == -1)
			alp[c - 97] = i;
		i++;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alp[i]);
	}
}
