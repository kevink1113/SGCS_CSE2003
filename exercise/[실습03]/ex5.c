#include <stdio.h>

int sqr(int);
void printOne(int);

void main(void)
{
	int a;
	int zeg;
	printf("Input: ");
	scanf("%d", &a);
	
	zeg=sqr(a);
	
	printOne(zeg);
}

int sqr(int a)
{

	return a*a;
}

void printOne(int result)
{
	printf("Result: %d\n", result);
}
