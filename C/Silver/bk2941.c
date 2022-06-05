#include <stdio.h>

int main()
{
	int cnt = 0;
	char str[106];
	scanf("%s", str);
	for (int i = 0; str[i] != 0; i++)
	{
		if ((str[i] == 'c' && str[i + 1] == '=') || (str[i] == 'c' && str[i + 1] == '-') || (str[i] == 'd' && str[i + 1] == '-') || (str[i] == 'l' && str[i + 1] == 'j') || (str[i] == 'n' && str[i + 1] == 'j') || (str[i] == 's' && str[i + 1] == '=') || (str[i] == 'z' && str[i + 1] == '='))
		{
			cnt++;
			i++;
		}
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
		{
			cnt++;
			i += 2;
		}
		else if ('a' <= str[i] && str[i] <= 'z')
			cnt++;
	}
	printf("%d", cnt);
}