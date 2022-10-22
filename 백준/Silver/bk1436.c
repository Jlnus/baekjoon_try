#include <stdio.h>

int check(int N)
{
	while (N != 0)
	{
		if (N % 1000 == 666)
			return 1;
		N /= 10;
	}
	return 0;
}
int main()
{
	int N, num = 666, i = 0;
	scanf("%d", &N);
	while (1)
	{
		if (check(num))
			i++;
		if (i == N)
		{
			printf("%d\n", num);
			return 0;
		}
		num++;
	}
}