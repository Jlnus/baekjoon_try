#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(c)
{
	int N[8001] = {0}, tmp;
	for (int i = scanf("%d", &c) - 1; i < c; i++)
	{
		scanf("%d", &tmp);
		N[tmp + 4000] += 1;
	}
	tmp = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (N[i] > 0)
		{
			for (int k = N[i]; k > 0; k--)
			{
				tmp += i - 4000;
			}
		}
	}

	printf("%d\n", (int)floor((double)tmp / c + 0.5)); // 산술평균

	tmp = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (N[i] > 0)
		{
			for (int k = N[i]; k > 0; k--)
			{
				tmp++;
				if (tmp == c / 2 + 1)
				{
					printf("%d\n", i - 4000); // 중앙값
					i = 10000;
					break;
				}
			}
		}
	}
	tmp = 0;
	for (int i = 0; i < 8001; i++)
	{
		N[i] && (tmp = (tmp > N[i]) ? tmp : N[i]);
	}
	int max[c];
	c = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (N[i] == tmp)
		{
			max[c] = i - 4000;
			c++;
		}
	}
	if (c > 1)
		printf("%d\n", max[1]); // 최빈값 중 두 번째로 작은 값
	else
		printf("%d\n", max[0]);
	c = -4000;
	tmp = 4000;
	for (int i = 0; i < 8001; i++)
	{
		if (N[i] > 0)
		{
			c = c > i - 4000 ? c : i - 4000;	   // 최대
			tmp = tmp < i - 4000 ? tmp : i - 4000; // 최소
		}
	}
	printf("%d\n", c - tmp); // 최댓값과 최솟값의 차이
}