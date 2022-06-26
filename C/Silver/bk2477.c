#include <stdio.h>

int main()
{
	int k, l[6], sum = 0, max = 0, tmp;
	scanf("%d", &k);
	for (int i = 0; i < 6; i++)
		scanf("%*d %d", &l[i]);
	for (int i = 0; i < 6; i++)
	{
		tmp = l[i] * l[(i + 1) % 6];
		sum += tmp;
		max = max > tmp ? max : tmp;
	}
	printf("%d\n", (sum - max * 2) * k);
}