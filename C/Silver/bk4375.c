#include <stdio.h>
int main()
{
	long long num;
	int cnt;
	for (int n; ~scanf("%d", &n); cnt = 1)
	{
		num = 1;
		while (num % n != 0)
		{
			num = (num * 10 + 1) % n;
			cnt++;
		}
		printf("%d\n", cnt);
	}
}