#include <stdio.h>
int main()
{
	char str[16];
	int cnt = 0;
	scanf("%s", str);
	for (int i = 0; str[i] != 0; i++)
	{

		if (str[i] == 'S')
			cnt += 8;

		else if (str[i] >= 'T' && str[i] <= 'V')
			cnt += 9;
		else if (str[i] >= 'W' && str[i] <= 'Z')
			cnt += 10;
		else
			cnt += (str[i] - 65) / 3 + 3;
	}
	printf("%d", cnt);
}
