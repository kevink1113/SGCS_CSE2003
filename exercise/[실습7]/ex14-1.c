#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Input two integer: ");
	scanf("%d %d", &a, &b);
	printf("common divisor: ");
	if ((a%2==0)&&(a%2==0))
		printf("2 ");
	if ((a % 3 == 0) && (a % 3 == 0))
		printf("3 ");
	if ((a % 5 == 0) && (a % 5 == 0))
		printf("5");

	return 0;
}