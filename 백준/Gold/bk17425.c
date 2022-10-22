#include <stdio.h>
long long list[1000001];

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 1; i < 1000001; i++)
    {
        for (int j = i; j < 1000001; j += i)
        {
            list[j] += i;
        }
        if (i > 1)
            list[i] += list[i - 1];
    }

    for (int j = 0; j < t; j++)
    {
        scanf("%d", &n);
        printf("%lld\n", list[n]);
    }
}