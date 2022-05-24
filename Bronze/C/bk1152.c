#include <stdio.h>

int main()
{
	int cnt = 1, i = 0, tmp = 0;
	char str[1000001];
	scanf("%[^\n]", str);
	while (str[i] == 32)
	{
		i++;
	}
	while (str[i] != 0)
	{
		if (str[i] == 32 && str[i + 1] != 0)
		{
			cnt++;
		}
		if (str[i] != 32)
			tmp = 1;
		i++;
	}
	if (tmp != 1)
		cnt = 0;
	printf("%d\n", cnt);
}