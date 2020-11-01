#include <stdio.h>
int elapsetime(int *a, int *b);

int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	elapsetime(&a, &b);

	return 0;
}

int elapsetime(int *a, int *b)
{
	int y1, m1, d1;
	int y2, m2, d2;
	int distance;
	int dis1, dis2, dis3;

	y1 = *b / 10000;
	m1 = (*b - 10000 * y1) / 100;
	d1 = *b - 10000 * y1 - 100 * m1;

	y2 = *a / 10000;
	m2 = (*a - 10000 * y2) / 100;
	d2 = *a - 10000 * y2 - 100 * m2;

	distance = (3600 * y1 + 60 * m1 + d1) - (3600 * y2 + 60 * m2 + d2);
	dis1 = distance / 3600;
	dis2 = (distance - 3600 * dis1) / 60;
	dis3 = (distance - 3600 * dis1 - 60 * dis2);
	printf("%02d%02d%02d\n", dis1, dis2, dis3);

	return 0;
}