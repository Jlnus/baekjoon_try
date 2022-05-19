#include <stdio.h>

int get_time(int **rule, int *t, int W, int K, int res)
{	
	int sign = 0;
	res += t[W];
	for(int i = 0; i<K;i++){
		if(rule[i][1] == W)
		{
			get_time(rule, t, rule[i][0], K, res);
			sign++;
		}
	}
	if (sign == 0)
		
	return(res);
}

int read_rule()
{
	int K, W;
	int res = 0;
	int t[1000];
	int rule[100000][2];

	scanf("%d %d", &t[0], &K);
	for (int i = 1; i <= t[0]; i++)
	{
		scanf("%d", &t[i]);
	}
	for (int i = 0; i < K; i++){
		scanf("%d %d",&rule[i][0], &rule[i][1]);
	}
	scanf("%d", &W);
	res = get_time(rule, t, W, K, 0);

	return (res);
}

int main()
{
	int T;
	int res[1000];
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		res[i] = read_rule();
	}
	for (int i = 0; i < T; i++)
	{
		printf("%d\n", res[i]);
	}
	return 0;
}