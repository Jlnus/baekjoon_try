#include <stdio.h>
#include <string.h>

int main()
{

	int X, cnt = 1, i, even;
	scanf("%d", &X);
	for (i = 0; cnt <= X; i++)
	{
		cnt += i;
	}
	even = ((i - 1) % 2 == 0) ? 0 : 1;
	if (even == 1)
		printf("%d/%d", cnt - X, i - cnt + X);
	else
		printf("%d/%d", i - cnt + X, cnt - X);
}