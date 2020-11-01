#include <stdio.h>

int sum(int, int);
void main(void)
{
	int a, b, h;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	
	h=sum(a, b);
	printf("%d + %d = %d\n", a, b, h);
}

int sum(int a, int b)
{
	return a+b;
}
	
