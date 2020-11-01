#include <stdio.h>

int cam(int, float);
int mac(int, float);

void main (void)
{
	int a;
	float b;
	int c, m;
	scanf("%d %f", &a, &b);
	
	c=cam(a, b);
	m=mac(a, b);
	
	printf("cast and multiply: %d\n", c);
	printf("multiply and cast: %d\n", m);
}

int cam(int a, float b)
{
	int result;
	result=a*(int)b;
	return result;
}

int mac(int a, float b)
{
	int result;
	result=a*b;
	return result;
}

