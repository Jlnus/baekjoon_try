#include <stdio.h>

int main()
{
	int n, min, max, tmp;
	scanf("%d", &n);
	scanf("%d",&max);
	min = max;
	
	for(int i = 1; i<n;i++){
		scanf("%d",&tmp);
		max = (max > tmp) ? max : tmp;
		min = (min < tmp) ? min : tmp;
	}
	printf("%d %d", min, max);
}