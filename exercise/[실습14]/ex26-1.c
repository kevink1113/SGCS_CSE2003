#include <stdio.h>
int factorial (int n);
int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d\n", factorial(a));
	
	return 0;
}

int factorial (int n)
{
	if (n==0)
		return 1;
	else
		return n*factorial(n-1);
}

	
