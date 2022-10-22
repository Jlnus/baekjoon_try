#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double w, h, x, y, p;

int check(double posx, double posy)
{
	if (posx >= x && posx <= x + w && posy >= y && posy <= y + h)
		return 1;
	if (pow(abs(posx - x), 2) + pow(abs(posy - y - h / 2), 2) <= pow(h / 2, 2) ||
		pow(abs(posx - x - w), 2) + pow(abs(posy - y - h / 2), 2) <= pow(h / 2, 2))
		return 1;
	return 0;
}

int main()
{
	double posx, posy;
	int cnt = 0;
	scanf("%lf %lf %lf %lf %lf", &w, &h, &x, &y, &p);

	for (int i = 0; i < p; i++)
	{
		scanf("%lf %lf", &posx, &posy);
		cnt += check(posx, posy);
	}
	printf("%d", cnt);
}
