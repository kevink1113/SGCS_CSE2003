#include <stdio.h>
void swap(int *x, int *y);

int main(void)
{
	int a, b, c;
	printf("Input: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a <= 0)
		a=- a;
	if (b <= 0)
		b=-b;
	if (c <= 0)
		c=-c;

	if (a<b)
		swap(&a, &b);
	if (a<c)
		swap(&a, &c);
	if (b<c)
		swap(&b, &c);

	printf("Result: %d %d %d\n", a, b, c);

	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = (*x);
	(*x) = (*y);
	(*y) = temp;
}