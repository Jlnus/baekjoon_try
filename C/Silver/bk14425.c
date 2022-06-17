#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binsearch(int data[], int n, int key)
{
	int low, high;
	int mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == data[mid])
		{ //탐색 성공
			return 1;
		}
		else if (key < data[mid])
		{ //탐색 범위를 아래쪽으로
			high = mid - 1;
		}
		else if (key > data[mid])
		{ //탐색 범위를 위쪽으로
			low = mid + 1;
		}
	}
	return 0; //탐색 실패
}

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	char S[N], find;
	for (int i = 0; i < N; i++)
		scanf("%d", &S[i]);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &find);
		binsearch(S, find);
	}
}