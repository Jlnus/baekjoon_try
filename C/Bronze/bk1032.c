#include <stdio.h>
#include <string.h>

int main()
{
	char s[51], new[51];
	int N;
	scanf("%d", &N);
	scanf("%s", s);
	for (int z = 1; z < N; z++)
	{
		scanf("%s", new);
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] != new[i])
				s[i] = '?';
		}
	}
	printf("%s\n", s);
}