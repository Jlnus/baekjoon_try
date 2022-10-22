#include <stdio.h>
#include <math.h>

int main()
{
    
	int a = 1, b, c;
	while (a != 0)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0)
			break;
		else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
			printf("right\n");
		else
			printf("wrong\n");
	}
}
