#include <stdio.h>
#include <string.h>

int main()
{
	char A[10000], B[10000];
	int num[10001] = {0};
	int max, lA, lB, i = 0;

	scanf("%s %s", A, B);
	lA = strlen(A);
	lB = strlen(B);
	if (lA > lB)
		max = lA;
	else if (lA < lB)
		max = lB;
	else if (A[0] - '0' + B[0] - '0' > 9)
		max = lA + 1;
	else
		max = lA;
	while (lA > 0 && lB > 0) // 예제 이상하게 나옴.
	{
		num[max - 1 - i] += (A[lA - 1] - '0' + B[lB - 1] - '0') % 10;
		if (num[max - 1 - i] > 9)
		{
			num[max - 2 - i] += 1;
			num[max - 1 - i] %= 10;
		}
		lA--;
		lB--;
		i++;
	}

	if (lA > lB)
		for (int i = 0; i < lA; i++)
		{
			num[lA - 1 - i] = A[lA - 1 - i] - '0';
		}
	else if (lB > lA)
		for (int i = 0; i < lB; i++)
		{
			num[lB - 1 - i] = B[lB - 1 - i] - '0';
		}
	else if (A[0] - '0' + B[0] - '0' > 9)
		num[0] = (A[0] - '0' + B[0] - '0') / 10;
	else
		num[0] = A[0] - '0' + B[0] - '0';

	for (int i = 0; i < max; i++)
	{
		printf("%d", num[i]);
	}
}